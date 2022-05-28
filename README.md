# OOP_TRAINING
Programming II – Final Exam Sample
Write a C++ program that follows the concepts of OOP.
Through the application, you need to use inheritance!
You are provided with a simple Animal class hierarchy that contains:
Animal - Base class
Bird - Derived class
FlyingBird – Derived class of Bird
NotFlyingBird – Derived class of Bird
Every Animal has an ID, name, isHungry and age property.
Every Animal has a blink(), eat() and info() method.
Every Bird has an additional wings property.
Every Bird has a sing() method.
Every FlyingBird has an additional range property.
Every FlyingBird has a fly() method and can sing, blink and eat.
Every NotFlyingBird has an additional „usefulness” property (range 1-10 where 10 is
the most useful).
Every NotFlyingBird can sing, blink and eat.
If you call the info() method on any instance, all the object details should be
displayed.
When you start the application, the following question welcoming the user:
-
What type of Animal do you want to create? (A-Animal, B-Bird, F-Flying Bird,
N-Not Flying Bird)
Based on the user input create the corresponding animal.
Then you can list out all the Animal Types. Based on the type, display a list and
select an Animal from it (ex.: Larry).
After the user selected the Animal, display the following:
-
What do you want to do with Larry?
o Eat
o Sing [if available]
o Info
o Fly …etc. [if available: Obviously, a NotFlyingBird instance doesn’t have
this option here.]Bird larry.sing() --> „Larry is singing”
Bird larry.fly() --> „Larry can fly up to 200km-s”
Bird larry.info() --> „1 - Larry is a Bird type of Animal, has 762 wings, currently not
hungry and 2 years old.”
When you create a FlyingBird (or Bird), use the parent class’ constructors anywhere
you can to create a new instance!
Pro tip: CRUD operations on the selected animals.
