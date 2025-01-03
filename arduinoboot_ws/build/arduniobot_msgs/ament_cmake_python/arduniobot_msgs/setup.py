from setuptools import find_packages
from setuptools import setup

setup(
    name='arduniobot_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('arduniobot_msgs', 'arduniobot_msgs.*')),
)
