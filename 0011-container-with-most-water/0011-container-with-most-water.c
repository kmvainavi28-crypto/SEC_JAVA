
int maxArea(int* height, int heightSize) {

    int left = 0;
        int right = heightSize - 1;

            int maxWater = 0;

                while (left < right) {

                        // Find the smaller height
                                int h = (height[left] < height[right])
                                                ? height[left] : height[right];

                                                        // Calculate area
                                                                int width = right - left;
                                                                        int area = h * width;

                                                                                // Update maximum area
                                                                                        if (area > maxWater) {
                                                                                                    maxWater = area;
                                                                                                            }

                                                                                                                    // Move the pointer with smaller height
                                                                                                                            if (height[left] < height[right]) {
                                                                                                                                        left++;
                                                                                                                                                }
                                                                                                                                                        else {
                                                                                                                                                                    right--;
                                                                                                                                                                            }
                                                                                                                                                                                }

                                                                                                                                                                                    return maxWater;
                                                                                                                                                                                    }
                                                                                                                                                                                    
