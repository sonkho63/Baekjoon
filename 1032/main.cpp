#include <iostream>
#include <string.h>

int main() {
	int T;

	char fileName[50][52] = { 0 };
	char result[52] = { 0 };

	scanf("%d", &T);
	
	for (int i = 0; i < T; ++i) {
		scanf("%s", &fileName[i]);
	}

	strcpy(result, fileName[0]);
	for (int i = 1; i < T; ++i) {
		for (int j = 0; j < 51; ++j) {
			if (result[j] != fileName[i][j]) {
				result[j] = '?';
			}
		}
	}

	printf("%s", result);
}
