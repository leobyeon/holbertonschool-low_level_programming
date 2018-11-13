#!/usr/bin/python3
from models.base_model import BaseModel


class User(BaseModel):
    """
    class user - inherits from BaseModel
    """
    email = ""
    password = ""
    first_name = ""
    last_name = ""
