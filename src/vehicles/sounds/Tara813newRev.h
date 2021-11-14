const unsigned int revSampleRate = 22050;
const unsigned int revSampleCount = 2481;
const signed char revSamples[] = {
0, -1, 4, 11, 22, 26, 31, 27, 26, 29, 32, 35, 36, 33, 26, 20,
15, 11, 5, 0, -2, 0, 3, -2, -2, -3, -6, -8, -6, 1, -1, 2, 
6, 5, 5, 10, 11, 9, 10, 11, 18, 25, 27, 30, 30, 31, 34, 34, 
37, 38, 36, 34, 28, 19, 8, 2, 3, 1, 0, -2, -3, -12, -21, -29, 
-29, -25, -24, -22, -21, -21, -23, -32, -43, -49, -49, -47, -45, -44, -39, -33, 
-28, -18, -13, -15, -18, -16, -13, -9, -2, 3, 1, 2, -2, -8, -11, -13, 
-10, -8, -7, -2, -3, -3, -2, 0, 5, 9, 16, 18, 10, 6, 5, 8, 
15, 22, 21, 18, 15, 8, 1, 4, 13, 20, 28, 36, 42, 33, 30, 35, 
34, 38, 44, 47, 42, 37, 36, 35, 39, 40, 39, 37, 36, 32, 27, 22, 
12, 9, 6, -3, -5, -8, -12, -17, -20, -28, -32, -35, -40, -40, -40, -39, 
-30, -20, -10, -1, 2, 5, 6, 10, 17, 25, 33, 38, 39, 33, 31, 28, 
30, 26, 26, 33, 29, 18, 14, 9, 3, -4, -12, -20, -27, -30, -34, -45, 
-50, -48, -44, -40, -40, -39, -40, -42, -39, -34, -31, -31, -27, -24, -21, -17, 
-9, -2, 1, 3, 3, 4, 3, 6, 12, 18, 20, 16, 14, 11, 13, 13, 
13, 14, 14, 11, 7, 7, 4, -4, -18, -24, -23, -22, -26, -30, -35, -37, 
-38, -37, -34, -35, -36, -41, -43, -39, -32, -25, -20, -12, -5, 0, 4, 12, 
15, 22, 33, 41, 40, 39, 37, 32, 27, 25, 21, 15, 16, 17, 10, 3, 
-8, -18, -26, -28, -30, -40, -40, -41, -40, -36, -40, -39, -38, -33, -22, -20, 
-16, -9, -8, -7, -13, -9, 4, 10, 19, 20, 21, 20, 14, 17, 21, 26, 
30, 33, 28, 27, 30, 28, 29, 41, 41, 38, 34, 32, 32, 29, 29, 26, 
21, 14, 13, 8, 0, -1, -8, -17, -22, -28, -33, -36, -40, -44, -50, -56, 
-62, -58, -53, -51, -47, -38, -25, -13, -4, -5, 0, 6, 10, 17, 25, 28, 
29, 34, 36, 36, 38, 37, 36, 33, 35, 36, 30, 25, 20, 15, 12, 14, 
22, 27, 28, 25, 23, 22, 25, 30, 28, 19, 12, 12, 11, 8, 6, 6, 
4, 11, 16, 18, 23, 27, 29, 31, 36, 41, 41, 43, 46, 44, 47, 50, 
47, 43, 38, 33, 25, 20, 20, 16, 5, -5, -10, -15, -23, -30, -36, -37, 
-36, -38, -42, -49, -48, -47, -45, -45, -44, -36, -36, -31, -31, -36, -34, -27, 
-21, -18, -15, -10, -1, 2, 4, 1, -1, 0, 3, 4, 2, -2, -6, -16, 
-24, -27, -33, -39, -40, -44, -47, -46, -45, -44, -44, -39, -34, -37, -38, -36, 
-38, -37, -35, -29, -26, -22, -13, -12, -8, -8, -10, -7, -3, 3, 6, 11, 
11, 8, 7, 6, 10, 19, 19, 11, 12, 14, 19, 21, 22, 21, 16, 11, 
8, 7, 7, 5, 2, -1, -3, -3, -6, -7, -6, -2, -4, -2, 0, 2, 
10, 17, 20, 18, 17, 14, 7, 0, -1, -2, -9, -15, -17, -19, -29, -35, 
-39, -39, -34, -31, -37, -37, -36, -34, -35, -35, -33, -26, -14, -2, 11, 22, 
25, 31, 35, 38, 43, 53, 54, 55, 55, 50, 45, 38, 39, 38, 37, 34, 
28, 32, 38, 44, 48, 49, 47, 49, 55, 56, 54, 54, 48, 42, 39, 38, 
32, 26, 23, 13, 9, 11, 14, 11, 11, 8, -1, 0, 7, 1, 2, 7, 
12, 19, 22, 25, 25, 25, 24, 25, 21, 20, 26, 22, 17, 14, 10, 3, 
0, 0, -7, -20, -34, -40, -40, -43, -38, -22, -25, -39, -49, -50, -57, -62, 
-62, -62, -58, -57, -54, -55, -60, -59, -54, -46, -43, -38, -37, -44, -48, -55, 
-53, -51, -50, -41, -35, -32, -31, -26, -18, -13, -6, 1, -2, -2, 0, 2, 
3, 3, -1, -9, -9, -8, -13, -6, -5, -10, -9, -11, -26, -44, -49, -45, 
-42, -36, -32, -28, -27, -18, -13, -24, -18, -10, -6, -3, 5, 3, -5, -3, 
4, 10, 11, 10, 20, 34, 35, 36, 42, 30, 25, 35, 43, 45, 48, 42, 
36, 27, 19, 3, -5, -4, -5, -12, -18, -31, -40, -42, -36, -34, -32, -22, 
-18, -23, -31, -29, -27, -25, -20, -16, -18, -20, -20, -14, -10, -17, -21, -13, 
-9, -2, 7, 13, 16, 14, 17, 21, 20, 23, 26, 26, 31, 36, 39, 36, 
30, 30, 30, 33, 34, 28, 25, 27, 30, 29, 32, 41, 35, 35, 35, 27, 
19, 13, 13, 11, 12, 16, 15, 18, 23, 25, 30, 35, 35, 33, 32, 31, 
32, 37, 37, 26, 15, 11, 8, 5, 9, 7, 6, 7, 6, 6, 4, 13, 
15, 19, 26, 29, 21, 18, 26, 28, 25, 21, 22, 19, 12, 10, 14, 10, 
1, -3, -2, -4, -16, -21, -26, -29, -36, -44, -49, -48, -42, -44, -45, -37, 
-37, -38, -40, -47, -48, -44, -38, -35, -35, -36, -36, -37, -43, -47, -47, -50, 
-51, -41, -36, -31, -24, -15, -7, -10, -11, -10, -8, -4, 3, 8, 6, 1, 
-4, -13, -9, -4, -7, -6, -9, -17, -22, -22, -18, -15, -11, -7, -1, 3, 
8, 10, 10, 13, 10, 14, 24, 31, 34, 34, 31, 26, 24, 25, 33, 35, 
36, 36, 32, 24, 16, 11, 11, 9, 8, 0, -4, 0, 2, -4, -13, -12, 
-9, -7, -4, -1, -3, -18, -30, -29, -26, -25, -20, -26, -32, -31, -33, -40, 
-41, -37, -37, -37, -26, -6, 3, 6, 1, 0, 1, 14, 25, 32, 36, 37, 
37, 28, 25, 29, 30, 36, 30, 21, 20, 16, 9, 4, -8, -13, -17, -22, 
-31, -41, -48, -47, -41, -40, -38, -24, -18, -8, 0, 3, 9, 17, 23, 30, 
28, 24, 27, 44, 53, 58, 64, 68, 75, 73, 75, 81, 77, 69, 60, 57, 
57, 50, 41, 40, 36, 36, 36, 35, 36, 31, 25, 18, 10, 6, 0, -10, 
-15, -25, -36, -42, -42, -39, -37, -35, -33, -25, -23, -22, -21, -24, -22, -20, 
-12, -1, 0, 0, 7, 9, 7, 7, 4, -1, 0, 2, -3, -5, -9, -12, 
-20, -31, -31, -39, -47, -45, -42, -38, -36, -38, -41, -51, -60, -60, -59, -50, 
-40, -34, -43, -46, -43, -42, -39, -34, -32, -37, -41, -35, -33, -27, -12, -5, 
2, 9, 14, 17, 20, 25, 25, 22, 22, 21, 16, 14, 15, 13, -3, -1, 
5, 6, 4, -4, -5, -1, 4, 8, 7, 5, 6, 4, -3, -3, 3, 5, 
8, 12, 17, 19, 12, 12, 11, 9, 9, 13, 20, 22, 24, 22, 19, 10, 
-1, -3, 1, 4, 1, 4, 10, 12, 8, 6, 5, -5, -3, -7, -10, -12, 
-19, -30, -35, -38, -37, -39, -39, -32, -33, -37, -37, -41, -52, -55, -55, -56, 
-59, -57, -41, -35, -37, -38, -34, -26, -23, -19, -15, -17, -16, -18, -23, -26, 
-28, -29, -28, -32, -31, -23, -12, 0, 14, 19, 24, 33, 48, 64, 68, 65, 
71, 75, 75, 79, 85, 88, 89, 89, 89, 84, 86, 89, 86, 83, 86, 81, 
78, 75, 66, 57, 52, 46, 46, 44, 36, 25, 12, 8, 7, 2, -3, -1, 
-6, -9, -7, -9, -9, -4, -1, 0, 6, 15, 25, 45, 51, 52, 52, 50, 
51, 52, 44, 39, 36, 34, 31, 21, 17, 16, 14, 9, 2, -7, -21, -31, 
-32, -36, -46, -55, -63, -64, -68, -79, -92, -94, -93, -92, -87, -92, -100, -105, 
-107, -105, -99, -84, -65, -48, -39, -34, -26, -18, -15, -9, -4, 1, 9, 14, 
19, 18, 12, 8, 10, 15, 19, 22, 30, 31, 20, 19, 19, 12, 9, 13, 
13, 13, 6, -3, -12, -23, -28, -29, -23, -17, -12, -19, -23, -29, -33, -27, 
-8, 9, 23, 33, 33, 26, 15, 13, 15, 15, 20, 22, 19, 14, 10, 4, 
-4, -21, -23, -22, -27, -32, -36, -40, -50, -59, -63, -67, -64, -62, -57, -59, 
-63, -67, -76, -71, -65, -51, -39, -34, -24, -20, -8, 4, 11, 29, 35, 38, 
45, 46, 47, 57, 58, 52, 48, 51, 55, 60, 57, 52, 48, 46, 43, 42, 
38, 33, 26, 24, 20, 14, 13, 16, 18, 14, 14, 19, 21, 24, 25, 21, 
26, 32, 36, 36, 35, 42, 46, 50, 50, 48, 45, 41, 41, 40, 41, 39, 
38, 40, 44, 49, 51, 52, 49, 48, 49, 50, 50, 45, 29, 24, 20, 10, 
2, -3, -5, -1, 2, 1, -1, -9, -13, -15, -15, -12, -11, -15, -14, -8, 
-4, -4, -6, -10, -11, -12, -17, -21, -18, -24, -32, -35, -36, -36, -40, -48, 
-59, -66, -68, -62, -57, -50, -43, -40, -44, -42, -38, -41, -48, -56, -63, -57, 
-51, -49, -47, -43, -37, -36, -33, -33, -33, -32, -26, -20, -16, -16, -17, -14, 
-14, -7, 1, 0, -3, -3, -3, -4, -2, 2, 3, -2, -6, -5, -7, -16, 
-20, -21, -23, -20, -19, -17, -12, -17, -23, -28, -33, -37, -35, -31, -29, -27, 
-26, -19, -14, -11, -7, -9, -7, 4, 6, 12, 17, 16, 14, 14, 17, 23, 
31, 34, 25, 20, 14, 16, 15, 6, 3, 2, 3, 1, 0, -2, -4, -5, 
-5, -5, -7, -13, -13, -9, -3, -2, -6, -5, -5, -5, -6, -2, 6, 20, 
32, 37, 41, 42, 36, 39, 40, 41, 50, 55, 56, 54, 48, 43, 41, 41, 
39, 39, 37, 39, 42, 39, 35, 31, 27, 23, 18, 16, 21, 17, 11, 3, 
-8, -15, -14, -13, -14, -16, -11, -9, -12, -9, -2, 3, 5, 6, 14, 19, 
17, 15, 10, 7, 7, 5, 7, 14, 15, 14, 15, 21, 20, 11, 10, 16, 
23, 23, 24, 23, 22, 17, 8, 4, -1, 1, 2, -1, -2, 0, -8, -16, 
-17, -13, -13, -15, -15, -16, -20, -24, -22, -21, -20, -13, -9, -8, -6, -10, 
-10, -12, -17, -14, -4, -2, -1, -2, -2, -7, -13, -14, -15, -14, -10, -7, 
-7, -12, -21, -29, -33, -35, -36, -35, -34, -37, -38, -39, -42, -44, -48, -51, 
-52, -51, -48, -44, -42, -40, -44, -43, -44, -41, -33, -23, -8, -6, -2, 0, 
-2, -2, 8, 12, 17, 23, 21, 10, 0, -5, -1, 3, 2, 10, 11, 12, 
9, 0, -2, -1, 3, 7, 8, 11, 10, 9, 6, 1, -2, -4, -4, 2, 
13, 18, 13, 5, -2, -2, -3, -6, -3, 2, 2, -5, -12, -7, 1, 1, 
3, 9, 13, 17, 23, 28, 31, 33, 36, 34, 32, 34, 38, 39, 34, 28, 
17, 13, 11, 12, 18, 18, 15, 12, 10, 9, 4, 2, 9, 10, 13, 21, 
21, 15, 15, 20, 21, 18, 25, 23, 20, 22, 21, 16, 15, 17, 12, 2, 
-7, -12, -25, -29, -30, -34, -36, -28, -26, -22, -17, -8, 5, 18, 32, 43, 
54, 59, 59, 56, 51, 47, 44, 40, 24, 20, 18, 16, 19, 20, 24, 21, 
19, 20, 16, 14, 11, 8, 3, -1, -1, -13, -23, -24, -30, -40, -35, -33, 
-40, -48, -54, -48, -41, -33, -32, -34, -31, -23, -8, 3, 9, 9, 11, 16, 
19, 20, 21, 18, 13, 10, 6, 1, -4, -5, -6, -14, -20, -23, -23, -28, 
-34, -39, -36, -37, -41, -37, -35, -37, -39, -43, -44, -45, -42, -42, -47, -48, 
-49, -47, -40, -36, -33, -29, -17, -7, -3, -1, -2, -1, 3, 10, 11, 13, 
17, 22, 22, 21, 22, 16, 13, 10, 14, 15, 11, 10, 6, -3, -15, -19, 
-24, -33, -39, -38, -38, -42, -44, -39, -41, -37, -32, -29, -28, -28, -23, -32, 
-37, -32, -24, -20, -17, -10, -11, -14, -14, -19, -24, -19, -9, 0, 4, 8, 
1, 0, 2, 5, 10, 12, 19, 27, 29, 30, 29, 27, 20, 15, 23, 28, 
25, 19, 17, 15, 16, 24, 31, 31, 30, 31, 33, 35, 34, 31, 28, 25, 
18, 13, 26, 29, 31, 32, 28, 29, 26, 25, 22, 22, 31, 44, 52, 57, 
57, 56, 52, 51, 53, 54, 57, 56, 59, 57, 52, 50, 50, 54, 53, 48, 
35, 23, 13, 2, -10, -19, -23, -28, -28, -23, -22, -24, -23, -23, -19, -14, 
-13, -10, -8, -2, 0, 2, 2, 0, -2, -4, 6, 12, 21, 19, 13, 5, 
-14, -22, -24, -22, -18, -13, -14, -15, -15, -18, -24, -24, -25, -18, -13, -13, 
-14, -29, -32, -38, -49, -55, -57, -59, -58, -55, -57, -56, -54, -57, -55, -58, 
-54, -43, -29, -19, -13, -3, 2, 2, 16, 23, 24, 22, 24, 22, 20, 18, 
18, 19, 16, 14, 8, -1, -4, -7, -5, 2, 5, 4, -4, -10, -18, -22, 
-24, -31, -33, -28, -26, -37, -50, -55, -55, -51, -45, -40, -37, -37, -39, -39, 
-35, -30, -20, -8, 3, -6, -12, -8, -11, -22, -32, -35, -35, -39, -45, -50, 
-59, -62, -62, -56, -49, -53, -70, -73, -71, -65, -60, -54, -44, -48, -47, -45, 
-51, -56, -52, -43, -40, -32, -20, -11, -4, 3, 9, 14, 19, 38, 55, 63, 
67, 72, 84, 91, 103, 119, 126, 127, 127, 126, 126, 126, 126, 127, 127, 127, 
126, 126, 126, 109, 88, 77, 73, 72, 80, 84, 77, 69, 66, 63, 59, 62, 
61, 66, 80, 82, 59, 49, 48, 42, 35, 36, 37, 35, 29, 24, 21, 13, 
1, -6, -4, -6, -12, -20, -22, -29, -35, -37, -44, -48, -48, -55, -64, -75, 
-88, -85, -81, -73, -67, -67, -64, -67, -66, -68, -67, -59, -48, -47, -52, -54, 
-60, -65, -65, -55, -44, -42, -42, -38, -33, -30, -30, -26, -18, -12, -12, -11, 
-6, 0, 4, 3, 0, 0, -5, -10, -11, -8, -6, -9, -6, -4, -6, -4, 
1, 10, 17, 24, 25, 25, 23, 17, 17, 18, 20, 27, 27, 22, 16, 8, 
5, 2, 9, 18, 21, 18, 11, 2, -7, -14, -24, -25, -25, -28, -32, -42, 
-58, -62, -63, -61, -64, -67, -63, -63, -63, -64, -67, -60, -56, -48, -39, -37, 
-36, -37, -33, -23, -11, -1, -4, -11, -16, -24, -33, -38, -38, -41, -45, -47, 
-46, -41, -48, -55, -55, -56, -56, -60, -65, -68, -68, -69, -69, -65, -59, -45, 
-33, -23, -2, 13, 32, 45, 63, 89, 106, 114, 123, 127, 127, 127, 126, 126, 
126, 126, 126, 127, 127, 127, 126, 126, 127, 123, 120, 114, 107, 93, 79, 67, 
62, 61, 52, 42, 29, 12, 5, 3, -4, -7, -4, 2, 4, 2, 3, 1, 
0, 7, 16, 20, 25, 25, 19, 11, 5, 9, 9, 10, 13, 9, 10, 8, 
2, -4, -3, -11, -25, -32, -40, -44, -46, -50, -54, -62, -72, -79, -85, -90, 
-94, -93, -93, -97, -101, -104, -105, -96, -88, -76, -66, -60, -56, -44, -26, -12, 
0, };