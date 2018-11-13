#!/usr/bin/python3
"""define module"""
import json
from models.base_model import BaseModel
from models.user import User

class FileStorage:
    """define class FileStorage"""

    __file_path = "file.json"
    __objects = {}
    classes = {
            "BaseModel": BaseModel,
            "User": User
            }

    def all(self):
        """returns self.__objects"""
        return self.__objects

    def new(self, obj):
        """sets in __objects the obj with key <obj class name>.id"""
        if obj:
            self.__objects["{}.{}".format(str(type(obj).__name__), obj.id
                )] = obj

    def save(self):
        """serializes __objects to the JSON file (path: __file_path)"""
        d = {}
        for k, v in self.__objects.items():
            d[k] = v.to_dict()
        with open(self.__file_path, "w") as f:
            json.dump(d, f)

    def reload(self):
        """
        deserializes the JSON file to __objects 
        (only if the JSON file (__file_path) exists; 
        otherwise, do nothing. 
        If the file doesn’t exist, 
        no exception should be raised)
        """
        try:
            with open(self.__file_path) as f:
                obj = json.loads(f.read())
            for k, v in obj.items():
                self.__objects[k] = self.classes[v["__class__"]](**v)
        except FileNotFoundError:
            pass
