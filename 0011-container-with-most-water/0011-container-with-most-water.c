int maxArea(int* height, int heightSize) {
    int max_area = 0;
    int left = 0, right = heightSize - 1;

    while (left < right) {
        int h = height[left] < height[right] ? height[left] : height[right];
        int area = h * (right - left);
        if (area > max_area) {
            max_area = area;
        }
        
        if (height[left] < height[right])
            left++;
        else
            right--;
    }
    return max_area;
}