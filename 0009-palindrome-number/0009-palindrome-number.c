bool isPalindrome(int x) {
    if(x < 0) return false;
    int number = x;
    int reminder;
    long temp = 0;
    while(number != 0){
        reminder = number % 10;
        temp = (temp * 10) + reminder;
        number = number / 10;
    }
    if(temp == x){
        return true;
    }
    else{
        return false;
    }
}