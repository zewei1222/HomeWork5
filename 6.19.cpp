#include <iostream>
#include <ctime>
#define point 13

using namespace std;

int main() {
    int i = 1, d1, d2;
    int dice[point] = {0};

	srand(time(nullptr));
	
    while (i <= 36000) {
        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;

        ++dice[d1 + d2];
        i++;
    }

    for (int i = 2; i <= 12; i++) {
        cout << "點數: " << i << " 出現的次數為 " << dice[i] << endl;
    }
    
  int expectedOccurrences = 6000;
    printf("\nExpected occurrences for 7: %d\n", expectedOccurrences);

    int actualOccurrencesFor7 = dice[7]; 
    printf("Actual occurrences for 7: %d\n", actualOccurrencesFor7);

    double difference = abs(actualOccurrencesFor7 - expectedOccurrences);
    double percentDifference = (difference / expectedOccurrences) * 100;

    printf("Percent difference for 7: %.2f%%\n", percentDifference);

    return 0;}
