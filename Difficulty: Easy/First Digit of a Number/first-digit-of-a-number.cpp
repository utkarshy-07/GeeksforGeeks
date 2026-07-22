int firstDigit(int n) {
    // code here
    int first=n;
    while(first >=10){
        first /= 10 ;
    }
    return first;
}