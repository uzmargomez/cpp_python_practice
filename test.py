from build.main_module import add
from build.other_module import multiply
from build.main_module import Pet

print(add(2,3))
print(multiply(2,3))

my_dog = Pet('Pluto', 5)
print(my_dog.get_name())
print(my_dog.get_hunger())
print(my_dog.go_for_a_walk())
print(my_dog.get_hunger())