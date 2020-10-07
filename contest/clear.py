import os
files = [f for f in os.listdir('.') if os.path.isfile(f)]
for file in files:
    if(file != "template.cpp" and file != "clear.py"):
        os.remove(file)
