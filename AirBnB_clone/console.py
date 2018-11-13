#!/usr/bin/python3
"""define module"""
import cmd
from models import storage
from datetime import datetime
from models.base_model import BaseModel
from models.user import User


class HBNBCommand(cmd.Cmd):
    """define class HBNBCommand"""
    prompt = "(hbnb) "
    classes = { 
            "BaseModel": BaseModel, 
            "User": User, 
            }

    def do_quit(self, arg):
        """Quit command to exit the program"""
        quit()
        return True

    do_EOF = do_quit

    def emptyline(self):
        """an empty line + ENTER shouldn't execute anything"""
        pass

    def do_create(self, args):
        """
        creates a new instance of BaseModel,
        saves it (to the JSON file) and prints the id
        """
        arg_items = args.split()
        if len(arg_items) == 0:
            print("** class name missing **")
        elif len(arg_items) >= 1:
            if arg_items[0] not in self.classes:
                print("** class doesn't exist **")
            else:
                copy = BaseModel()
                copy.save()
                print(copy.id)

    def do_show(self, args):
        """
        prints the string representation of an instance 
        based on the class name and id
        """
        arg_items = args.split()
        if len(arg_items) == 0:
            print("** class name missing **")
        elif arg_items[0] not in self.classes:
            print("** class doesn't exist **")
        elif len(arg_items) == 1:
            print("** instance id missing **")
        elif len(arg_items) == 2:
                key = arg_items[0] + "." + arg_items[1]
                objs = storage.all()
                if key in objs:
                    item = objs[key]
                    print(item)
                else:
                    print("** no instance found **")

    def do_destroy(self, args):
        """
        deletes an instance based on the class name and id
        (save the change into the JSON file)
        """
        arg_items = args.split()
        if len(arg_items) == 0:
            print("** class name missing **")
        elif arg_items[0] not in classes:
            print("** class doesn't exist **")
        elif len(arg_items) == 1:
            print("** instance id missing **")
        elif len(arg_items) == 2:
                key = "BaseModel" + "." + arg_items[1]
                objs = storage.all()
                if key in objs:
                    del(objs[key])
                    storage.save()
                else:
                    print("** no instance found **")

    def do_all(self, *arg):
        """
        prints all string representation of all instances
        based or not on the class name
        """
        if not arg:
            print(storage.all())
        else:
            if arg in self.classes:
                print(storage.all()[arg])
            else:
                print("** class doesn't exist **")

    def do_update(self, args):
        """
        updates an instance based on the class name and id
        by adding or updating attribute (save the change
        into the JSON file)
        """
        arg_items = args.split()
        if len(arg_items) == 0:
            print("** class name missing **")
        elif arg_items[0] not in self.classes:
            print("** class doesn't exist **")
        elif len(arg_items) == 1:
            print("** instance id missing **")
        elif len(arg_items) == 2:
            print("** attribute name missing **")
        elif len(arg_items) == 3:
            print("** value missing **")
        else:
            if arg_items[0] in self.classes:
                key = arg_items[0] + "." + arg_items[1]
                objs = storage.all()
                if key in objs:
                    objs[key].__setattr__(key, type(objs[key].__getattr__(arg_items[2]))(arg_items[3]))
                    objs[key].updated_at = datetime.now()
                    storage.save()
                else:
                    print("** no instance found **")
    

if __name__ == '__main__':
    HBNBCommand().cmdloop()
