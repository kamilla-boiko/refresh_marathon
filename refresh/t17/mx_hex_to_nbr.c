int mx_strlen(const char *s);
double mx_pow(double n, unsigned int pow);
unsigned long mx_hex_to_nbr(const char *hex);

int mx_strlen(const char *s) {
    int count = 0;
    int i = 0;
    while (s[i] != '\0') {
        i++;
        count++;
    }
    return count;
}

double mx_pow(double n, unsigned int pow) {
    if (pow == 0) {
	return 1;
    }
    unsigned int i = 1;
    double num = n;
    while(i < pow) {
	num = num * n;
	i++;
    }
    return num;
}

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long res = 0;
    long int pow = mx_strlen(hex) - 1;
    long int num = 0;
    for (int i = 0; pow >= 0; i++) {
    	if ((hex[i] >= 65 && hex[i] <= 70) || (hex[i] >= 97 && hex[i] <= 102)) {
    		if (hex[i] >= 65 && hex[i] <= 70) {
    		    num = hex[i] - 55;
    		    res = res + num * mx_pow(16, pow);
    		    pow--;
    		}
    		else {
    		    num = hex[i] - 87;
    		    res = res + num * mx_pow(16, pow);
    		    pow--;
    		}
    	}
    	else if (hex[i] >= 48 && hex[i] <= 57) {
    		num = hex[i] - 48;
                res = res + num * mx_pow(16, pow);
    		pow--;
    	}
    	else {
            return 0;
    	}
    }
    return res;
}
