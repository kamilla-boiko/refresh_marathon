#include <unistd.h>
  
void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
int mx_strcmp (const char *s1, const char *s2);

int main(int argc, char* argv[]) {
    for (int i = 1; i < argc; i++) {
        for (int j = i + 1; j < argc; j++) {
            if (mx_strcmp(argv[i], argv[j]) > 0) {
                char *temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
        }
    }
    for (int k = 1; k < argc; k++) {
        mx_printstr(argv[k]);
        mx_printchar('\n');
    }
}
