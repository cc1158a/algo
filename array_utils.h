/* array_utils.h */
#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

// 二维数组访问宏
#define ACCESS_2D(array, i, j, cols) ((array)[(i) * (cols) + (j)])

// 三维数组访问宏
#define ACCESS_3D(array, i, j, k, cols, depth) ((array)[((i) * (cols) * (depth)) + ((j) * (depth)) + (k)])

#endif /* ARRAY_UTILS_H */