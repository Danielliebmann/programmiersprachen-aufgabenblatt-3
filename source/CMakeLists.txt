
# Build example
add_executable(beispiel
  beispiel.cpp)
target_link_libraries(beispiel
  
  m)

#Aufgabe 2,3,4
add_executable(aufgabe2bis4
  aufgabe2bis4.cpp)
target_link_libraries(aufgabe2bis4

  m)

#Aufgabe 5
add_executable(aufgabe5
  aufgabe5.cpp)
target_link_libraries(aufgabe5

  m)


#Aufgabe 7,8,9,10,11
add_executable(aufgabe7
  aufgabe7.cpp
  circle.cpp)
target_link_libraries(aufgabe7
	m)


