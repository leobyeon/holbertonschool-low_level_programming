#!/usr/bin/python3
"""BaseModel module"""
import uuid
from datetime import datetime
import models


class BaseModel:
    """define class BaseModel"""
    
    def __init__(self, *args, **kwargs):
        """initialize"""
        if not kwargs:
            self.id = str(uuid.uuid4())
            t = datetime.now()
            self.created_at = t
            self.updated_at = t
            models.storage.new(self)
        else:
            for k, v in kwargs.items():
                if k == "created_at" or k == "updated_at":
                    v = datetime.strptime(v, "%Y-%m-%dT%H:%M:%S.%f")
                if k != "__class__":
                    self.__setattr__(k, v)

    def __str__(self):
        """override the default __str__ method"""
        return "[{}] ({}) {}".format(self.__class__.__name__,
                                     self.id, self.__dict__)

    def save(self):
        """update updated_at with current datetime"""
        updated_at = datetime.now()
        models.storage.save()

    def to_dict(self):
        """return a dictionary containing all keys/values of the __dict__ instance"""
        d = self.__dict__.copy()
        d["__class__"] = self.__class__.__name__
        d["created_at"] = d["created_at"].isoformat()
        d["updated_at"] = d["updated_at"].isoformat()
        return d
