
```
cpp

#include <iostream>

int main() {
    int p = 40;
    int q = 17;

    std::cout << ( p & q ) << std::endl;
    std::cout << ( p | q ) << std::endl;
    std::cout << ( p ^ q ) << std::endl;
    std::cout << !p << std::endl;
    std::cout << !( p & q ) << std::endl;
    std::cout << !( p | q ) << std::endl;
    std::cout << ( p << 3 ) << std::endl;
    std::cout << ( p >> 3 ) << std::endl;

    return 0;
}

```



```bash

0
57
57
0
1
0
320
5

```


```
cpp

#include <iostream>

int main() {

    std::cout << false << std::endl;
    std::cout << !false << std::endl;

    auto b = true;
    std::cout << b << std::endl;
    std::cout << !b << std::endl;

    return 0;
}

```



```bash

0
1
1
0

```


```
cpp

#include <ios>
#include <iostream>

int main() {

    std::cout << true << std::endl;
    std::cout << false << std::endl;

    std::cout << std::boolalpha;

    std::cout << true << std::endl;
    std::cout << false << std::endl;

    return 0;
}

```



```bash

1
0
true
false

```


```
cpp

#include <iostream>

#define MIN_UNITS 60
#define MIN_SEMESTERS 5

int main () {
    int completed_units, completed_semesters;

    std::cout << "How many units have you completed?" << std::endl;
    // std::cin >> completed_units;
    completed_units = 60;

    std::cout << "How many semesters have you completed?" << std::endl;
    // std::cin >> completed_semesters;
    completed_semesters = 5;

    if (completed_units >= MIN_UNITS || completed_semesters >= MIN_SEMESTERS)
        std::cout << "You have earned your associates degree!" << std::endl;


    return 0;
}

```



```bash

How many units have you completed?
How many semesters have you completed?
You have earned your associates degree!

```


```
cpp

#include <iostream>

#define MIN_AGE 21
#define MIN_YEARS_DRIVING 5

int main () {
    int current_age, years_driving;

    std::cout << "How old are you?" << std::endl;
    // std::cin >> current_age;
    current_age = 21;

    std::cout << "How many years have you been driving?" << std::endl;
    // std::cin >> years_driving;
    years_driving = 5;

    if (current_age >= MIN_AGE && years_driving >= MIN_YEARS_DRIVING)
        std::cout << "You meet the requirements for a loan." << std::endl;

    return 0;
}

```



```bash

How old are you?
How many years have you been driving?
You meet the requirements for a loan.

```
