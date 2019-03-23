class PythonClassDemo:
    'Sample demo class for Python study'
    demoCount = 0;

    def __init__(self, name):
        self.name = name;

    def incrementCount(self):
        PythonClassDemo.demoCount += 1;

    def printMyName(self):
        print("My name is ", self.name);

    def __del__(self):
      class_name = self.__class__.__name__;
      print (class_name, ",",self.name," DESTROYED");

demoObject1 = PythonClassDemo("Name1");
demoObject1.incrementCount();
demoObject1.printMyName();
print("demo count" , PythonClassDemo.demoCount);

demoObject2 = PythonClassDemo("Name2");
demoObject2.incrementCount();
demoObject2.printMyName();
print("demo count" , PythonClassDemo.demoCount);

demoObject3 = PythonClassDemo("Name3");
demoObject3.incrementCount();
demoObject3.printMyName();
print("demo count" , PythonClassDemo.demoCount);

demoObject4 = PythonClassDemo("Name4");
demoObject4.incrementCount();
demoObject4.printMyName();
print("demo count" , PythonClassDemo.demoCount);

demoObject5 = PythonClassDemo("Name5");
demoObject5.incrementCount();
demoObject5.printMyName();
print("demo count" , PythonClassDemo.demoCount);

if hasattr(demoObject5, 'name'):
    print("demoObject5 has an attribute named name");
    myname = getattr(demoObject5,'name');
    print("My name is ", myname);
    setattr(demoObject5, 'name', 'NewName5');
    print("My modified name is ", demoObject5.name);
else:
    print("demoObject5 does not have an attribute named name");

del(demoObject5);

print ("PythonClassDemo.__doc__:", PythonClassDemo.__doc__);
print ("PythonClassDemo.__name__:", PythonClassDemo.__name__);
print ("PythonClassDemo.__module__:", PythonClassDemo.__module__);
print ("PythonClassDemo.__bases__:", PythonClassDemo.__bases__);
print ("PythonClassDemo.__dict__:", PythonClassDemo.__dict__);
    
