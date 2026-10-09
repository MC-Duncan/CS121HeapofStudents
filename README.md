# CS121HeapofStudents

## UML

```mermaid
classDiagram

class Dates {
    - string dateString
    - int month
    - int day
    - int year

    + Dates()
    + void init(dateString)
    + void printDate()
}

class Address {
    - string street
    - string city
    - string state
    - string zip

    + Address()
    + void init(street, city, state, zip)
    + void printAddress()
}

class Student {
    - string studentString
    - string firstName
    - string LastName
    - Date* dob
    - Date* expectedGrad
    - Address* Address
    - int creditHours
    
    + Student()
    + ~Student()
    + void init(studentString)
    + void printStudent()
    + string getFirstName()
    + string getLastName()
    + int getCreditHours() 
}

Student --> Address
Student --> Dates
```

## Dates::Dates()
```
  set dateString to ""
  set month to 0
  set day to 0
  set year to 0
```

## void Dates::init(dateString)
```
  
```

## void Dates::printAddress()
```

```

## Address::Address()
```
  set street to ""
  set city to ""
  set state to ""
  set zip to ""
```

## void Address::init(street, city, state, zip)
```
  set Address::street to street
  set Address::city to city
  set Address::state to state
  set Address::zip to zip
```

## void Address::printAddress()
```
  print street and new line
  print city, state
  print zip and new line
```

## Student::Student()
```

```

## Student::~Student()
```

```

## void Student::init(studentString)
```

```

## void Student::printStudent()
```

```


