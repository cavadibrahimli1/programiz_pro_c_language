// Replace ___ with your code
#include <stdio.h>

int main() {
    
    int students;

    // get input value for students
    scanf("%d", &students);

    // use the formula to calculate maximum possible handshakes and print
    int combination;
    combination = (students * (students - 1)) / 2;
    
    
    printf("%d", combination);
    return 0;
}
