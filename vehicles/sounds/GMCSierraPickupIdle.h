const unsigned int sampleRate = 22050;
const unsigned int sampleCount = 4351;
const signed char samples[] = {//0
0, -1, -1, 0, 1, 2, 2, 3, 5, 7, 11, 14, 16, 17, 18, 22, //16
28, 32, 30, 30, 31, 31, 33, 35, 34, 34, 36, 36, 38, 40, 40, 40, //32
40, 41, 40, 38, 37, 36, 37, 41, 44, 45, 42, 39, 38, 38, 38, 37, //48
36, 36, 37, 36, 34, 33, 33, 33, 33, 35, 35, 36, 35, 33, 33, 34, //64
34, 32, 31, 31, 34, 36, 35, 32, 30, 29, 27, 26, 25, 24, 22, 19, //80
15, 14, 14, 14, 14, 12, 12, 13, 17, 20, 20, 20, 20, 20, 22, 24, //96
25, 28, 26, 22, 21, 23, 23, 22, 20, 18, 19, 23, 26, 26, 26, 26, //112
26, 27, 28, 29, 29, 28, 27, 31, 33, 35, 35, 36, 36, 37, 38, 42, //128
44, 45, 45, 47, 48, 49, 51, 51, 49, 48, 47, 47, 46, 45, 45, 45, //144
46, 48, 49, 51, 53, 53, 54, 55, 55, 57, 58, 60, 60, 59, 60, 64, //160
67, 69, 70, 71, 70, 70, 72, 74, 75, 76, 76, 76, 77, 79, 82, 83, //176
83, 84, 85, 87, 88, 87, 85, 84, 84, 85, 86, 85, 84, 84, 85, 87, //192
87, 86, 85, 83, 82, 84, 87, 86, 85, 84, 84, 83, 82, 82, 81, 81, //208
80, 78, 75, 75, 77, 80, 81, 81, 79, 78, 78, 75, 72, 69, 67, 65, //224
65, 63, 62, 64, 63, 61, 59, 58, 60, 58, 56, 55, 54, 53, 49, 47, //240
44, 41, 40, 39, 36, 34, 32, 30, 27, 26, 24, 21, 20, 20, 19, 17, //256
16, 17, 17, 15, 10, 8, 10, 12, 11, 9, 2, 1, 2, 1, -2, -3, //272
-5, -7, -7, -7, -7, -7, -7, -7, -8, -7, -8, -10, -9, -9, -10, -12, //288
-14, -14, -13, -13, -13, -12, -10, -9, -10, -13, -13, -11, -12, -14, -15, -15, //304
-14, -13, -15, -16, -15, -14, -14, -13, -15, -16, -16, -15, -15, -17, -18, -19, //320
-20, -21, -21, -23, -24, -22, -20, -19, -14, -13, -12, -12, -11, -8, -9, -12, //336
-14, -14, -15, -16, -14, -12, -9, -9, -11, -9, -5, -2, -1, -1, -1, 1, //352
1, -1, -1, 1, 2, -1, -2, -1, 2, 5, 4, 5, 6, 6, 5, 4, //368
5, 4, 2, 0, 1, 2, -5, -7, -6, -1, 1, -3, -4, -5, -6, -7, //384
-10, -12, -13, -16, -19, -20, -20, -20, -23, -28, -28, -24, -26, -29, -28, -27, //400
-26, -29, -36, -38, -39, -40, -42, -41, -43, -45, -47, -49, -47, -44, -45, -48, //416
-50, -48, -44, -46, -51, -56, -58, -57, -54, -54, -57, -60, -61, -60, -53, -52, //432
-55, -56, -53, -49, -43, -44, -47, -51, -54, -53, -53, -56, -62, -70, -73, -67, //448
-66, -68, -70, -74, -74, -69, -65, -64, -68, -73, -73, -70, -69, -71, -77, -82, //464
-77, -73, -73, -73, -79, -86, -83, -82, -83, -84, -88, -93, -92, -92, -93, -96, //480
-105, -114, -112, -108, -106, -109, -116, -118, -115, -112, -110, -113, -118, -114, -110, -105, //496
-101, -103, -110, -106, -98, -91, -89, -93, -94, -91, -88, -86, -86, -91, -93, -92, //512
-90, -87, -87, -93, -93, -89, -85, -82, -81, -77, -74, -72, -68, -63, -60, -60, //528
-62, -62, -56, -52, -52, -50, -48, -46, -44, -41, -34, -33, -33, -32, -29, -27, //544
-27, -29, -29, -26, -26, -29, -27, -25, -24, -24, -25, -22, -21, -24, -25, -20, //560
-16, -15, -14, -15, -13, -8, -9, -9, -7, -4, -3, 2, 1, 1, 1, 0, //576
4, 9, 9, 9, 8, 7, 6, 7, 9, 11, 12, 12, 16, 17, 18, 19, //592
21, 24, 24, 24, 26, 30, 32, 31, 35, 40, 45, 50, 51, 50, 51, 54, //608
56, 58, 59, 57, 59, 62, 63, 64, 63, 61, 63, 66, 67, 65, 64, 66, //624
68, 69, 70, 72, 74, 71, 71, 73, 74, 72, 64, 60, 61, 62, 63, 61, //640
61, 62, 62, 63, 64, 65, 65, 65, 66, 67, 68, 66, 62, 58, 57, 56, //656
53, 53, 52, 49, 44, 39, 39, 42, 40, 35, 32, 32, 32, 32, 32, 35, //672
36, 30, 27, 28, 31, 30, 26, 24, 28, 31, 30, 29, 29, 28, 28, 29, //688
33, 34, 32, 30, 30, 33, 35, 34, 30, 28, 28, 28, 28, 27, 21, 19, //704
20, 25, 29, 31, 30, 31, 37, 42, 44, 44, 43, 43, 44, 44, 44, 43, //720
42, 40, 39, 41, 45, 42, 40, 44, 50, 53, 53, 50, 49, 50, 53, 57, //736
59, 58, 54, 53, 55, 60, 61, 57, 54, 55, 61, 66, 67, 64, 62, 64, //752
68, 72, 73, 71, 69, 68, 70, 71, 70, 67, 64, 62, 64, 65, 64, 62, //768
60, 60, 62, 63, 65, 65, 63, 63, 64, 65, 66, 64, 63, 62, 62, 64, //784
65, 65, 61, 62, 64, 63, 62, 61, 62, 66, 68, 66, 63, 61, 63, 64, //800
62, 61, 61, 58, 56, 54, 53, 51, 49, 48, 48, 49, 50, 51, 52, 51, //816
52, 53, 54, 55, 53, 52, 52, 49, 47, 46, 43, 43, 41, 38, 34, 31, //832
29, 28, 28, 29, 28, 23, 21, 21, 20, 18, 15, 9, 5, 4, 4, 4, //848
1, -1, -2, -4, -4, -5, -11, -14, -18, -19, -20, -22, -28, -34, -38, -40, //864
-41, -43, -47, -53, -56, -57, -59, -62, -61, -60, -63, -64, -64, -65, -71, -74, //880
-74, -72, -69, -69, -70, -66, -64, -66, -68, -67, -65, -64, -64, -61, -60, -64, //896
-66, -64, -58, -52, -52, -51, -49, -47, -49, -49, -47, -44, -41, -38, -37, -35, //912
-35, -36, -35, -34, -32, -30, -28, -26, -25, -24, -21, -21, -22, -21, -17, -14, //928
-17, -20, -23, -25, -25, -26, -25, -25, -25, -25, -27, -31, -35, -37, -38, -40, //944
-39, -39, -41, -41, -42, -42, -44, -44, -44, -44, -43, -44, -43, -44, -45, -43, //960
-38, -34, -37, -42, -44, -45, -46, -50, -53, -55, -56, -54, -50, -47, -47, -48, //976
-48, -47, -41, -35, -34, -34, -32, -30, -27, -24, -24, -25, -26, -24, -18, -17, //992
-17, -16, -15, -11, -5, -4, -4, -7, -10, -14, -13, -14, -18, -23, -25, -24, //1008
-24, -29, -35, -37, -37, -34, -34, -35, -37, -37, -35, -34, -34, -37, -40, -41, //1024
-39, -42, -47, -52, -54, -54, -54, -52, -53, -58, -64, -67, -65, -68, -76, -82, //1040
-85, -85, -84, -87, -92, -95, -94, -92, -90, -90, -94, -97, -96, -90, -86, -85, //1056
-85, -85, -82, -81, -79, -79, -82, -85, -84, -80, -76, -76, -81, -89, -90, -88, //1072
-85, -86, -87, -91, -92, -88, -82, -80, -80, -76, -70, -66, -66, -67, -65, -63, //1088
-60, -58, -56, -55, -56, -55, -56, -54, -54, -57, -57, -56, -57, -59, -57, -53, //1104
-52, -52, -53, -53, -49, -47, -49, -47, -44, -43, -44, -44, -41, -37, -34, -30, //1120
-23, -20, -19, -18, -18, -19, -10, -5, -3, -2, 1, 3, 5, 9, 12, 13, //1136
15, 20, 22, 27, 29, 31, 33, 36, 41, 46, 51, 53, 55, 56, 55, 56, //1152
58, 60, 61, 62, 65, 69, 72, 71, 71, 72, 72, 72, 73, 75, 78, 81, //1168
82, 82, 82, 80, 78, 78, 79, 80, 79, 77, 76, 79, 80, 78, 79, 79, //1184
78, 78, 79, 79, 76, 73, 73, 76, 77, 75, 74, 74, 75, 75, 73, 69, //1200
69, 70, 70, 69, 69, 69, 68, 67, 70, 74, 73, 73, 74, 76, 77, 78, //1216
77, 76, 78, 80, 82, 82, 78, 76, 76, 76, 75, 71, 71, 71, 70, 68, //1232
69, 70, 69, 68, 69, 70, 72, 71, 68, 65, 63, 61, 56, 55, 53, 49, //1248
47, 46, 47, 44, 40, 39, 40, 38, 32, 28, 26, 23, 18, 13, 9, 7, //1264
5, 2, 0, -3, -6, -7, -7, -6, -4, -2, -3, -2, -1, 2, 7, 5, //1280
0, -3, -4, -4, -4, -6, -8, -9, -10, -12, -14, -15, -15, -16, -16, -12, //1296
-11, -12, -12, -10, -5, -2, -1, -1, 0, 1, 3, 6, 7, 7, 8, 10, //1312
16, 20, 20, 18, 19, 22, 20, 20, 21, 21, 20, 19, 21, 23, 24, 25, //1328
27, 32, 30, 29, 33, 36, 38, 42, 42, 46, 50, 51, 51, 52, 51, 50, //1344
51, 53, 58, 58, 54, 53, 55, 58, 57, 55, 54, 54, 53, 54, 54, 54, //1360
54, 56, 58, 60, 60, 59, 57, 56, 57, 56, 55, 52, 49, 45, 42, 42, //1376
42, 39, 37, 35, 34, 34, 33, 31, 28, 25, 24, 23, 21, 16, 12, 4, //1392
1, -1, -3, -7, -10, -13, -15, -13, -10, -11, -13, -13, -11, -11, -14, -17, //1408
-20, -23, -26, -27, -27, -29, -33, -34, -36, -35, -36, -38, -41, -43, -43, -42, //1424
-42, -42, -43, -45, -45, -44, -43, -45, -47, -48, -49, -50, -51, -52, -53, -53, //1440
-53, -53, -52, -51, -51, -52, -51, -50, -51, -52, -50, -49, -51, -54, -56, -57, //1456
-55, -54, -55, -58, -60, -62, -63, -63, -62, -63, -66, -67, -68, -69, -68, -69, //1472
-70, -70, -71, -73, -74, -75, -75, -75, -74, -74, -77, -79, -80, -81, -81, -81, //1488
-82, -82, -80, -79, -78, -79, -79, -77, -76, -75, -75, -73, -74, -75, -74, -70, //1504
-65, -62, -59, -56, -51, -46, -43, -43, -40, -38, -33, -25, -20, -18, -18, -17, //1520
-13, -9, -7, -5, -4, -1, 2, 6, 7, 8, 8, 8, 9, 14, 14, 11, //1536
8, 9, 9, 10, 10, 9, 8, 8, 9, 12, 16, 17, 16, 15, 15, 18, //1552
23, 25, 24, 20, 20, 19, 17, 16, 13, 7, 2, 0, 0, -5, -9, -10, //1568
-11, -11, -15, -19, -22, -23, -23, -21, -20, -23, -30, -30, -31, -34, -36, -35, //1584
-36, -37, -38, -40, -42, -42, -44, -47, -47, -46, -46, -50, -52, -53, -53, -52, //1600
-53, -57, -59, -58, -57, -55, -56, -59, -60, -59, -57, -56, -51, -50, -52, -51, //1616
-50, -48, -45, -44, -47, -47, -45, -40, -35, -31, -30, -30, -31, -32, -29, -28, //1632
-29, -28, -26, -24, -23, -23, -26, -29, -29, -28, -27, -27, -28, -26, -24, -26, //1648
-28, -26, -24, -23, -23, -23, -26, -27, -25, -26, -27, -26, -25, -25, -25, -25, //1664
-22, -19, -18, -19, -21, -19, -17, -16, -17, -21, -24, -21, -18, -15, -13, -14, //1680
-16, -13, -9, -4, 0, 1, 0, 1, 4, 8, 10, 12, 12, 12, 15, 17, //1696
17, 18, 23, 29, 33, 36, 42, 46, 50, 53, 57, 59, 60, 61, 62, 63, //1712
61, 60, 59, 59, 61, 64, 67, 66, 68, 73, 79, 82, 83, 85, 88, 90, //1728
92, 95, 97, 98, 100, 101, 102, 105, 106, 103, 99, 97, 100, 105, 108, 106, //1744
104, 101, 101, 101, 100, 100, 99, 98, 97, 97, 96, 94, 89, 87, 87, 87, //1760
88, 88, 85, 81, 78, 76, 73, 69, 66, 63, 60, 56, 52, 51, 50, 47, //1776
42, 38, 37, 39, 40, 37, 32, 30, 28, 26, 24, 21, 17, 14, 11, 7, //1792
4, 1, 2, 0, -4, -6, -7, -7, -7, -7, -8, -10, -8, -7, -8, -9, //1808
-10, -13, -15, -12, -11, -14, -19, -21, -19, -19, -22, -26, -29, -31, -32, -34, //1824
-36, -35, -34, -38, -42, -44, -43, -42, -41, -42, -43, -41, -39, -35, -32, -32, //1840
-33, -32, -31, -30, -27, -27, -28, -28, -30, -31, -30, -27, -25, -25, -25, -28, //1856
-28, -26, -23, -20, -20, -19, -16, -15, -14, -13, -11, -10, -7, -4, -5, -5, //1872
-5, -3, 1, 5, 7, 9, 12, 14, 18, 22, 25, 27, 28, 27, 26, 26, //1888
28, 32, 33, 30, 29, 31, 33, 36, 38, 39, 38, 37, 40, 41, 42, 45, //1904
47, 49, 52, 54, 55, 56, 57, 56, 57, 58, 58, 60, 61, 60, 60, 59, //1920
60, 60, 58, 58, 59, 59, 60, 61, 58, 55, 53, 55, 57, 57, 53, 54, //1936
53, 50, 47, 46, 44, 42, 40, 38, 37, 36, 34, 32, 30, 27, 25, 25, //1952
21, 17, 13, 9, 6, 3, 2, 1, -2, -4, -8, -8, -7, -7, -8, -10, //1968
-14, -16, -17, -21, -24, -28, -31, -33, -35, -35, -35, -36, -37, -39, -39, -39, //1984
-39, -40, -43, -45, -46, -47, -48, -51, -54, -55, -55, -56, -56, -56, -58, -59, //2000
-58, -59, -60, -60, -62, -64, -66, -66, -66, -70, -73, -76, -79, -79, -79, -81, //2016
-82, -81, -82, -83, -82, -81, -79, -77, -76, -74, -73, -76, -80, -80, -78, -79, //2032
-81, -81, -79, -77, -75, -76, -77, -78, -75, -70, -67, -67, -68, -66, -62, -58, //2048
-59, -60, -59, -56, -52, -48, -46, -43, -40, -35, -30, -31, -29, -24, -20, -15, //2064
-12, -14, -15, -14, -12, -11, -11, -13, -13, -11, -7, -5, -7, -5, 0, 5, //2080
10, 14, 15, 16, 20, 23, 27, 29, 27, 26, 27, 31, 35, 35, 34, 34, //2096
37, 42, 47, 43, 39, 39, 42, 48, 50, 45, 41, 38, 40, 45, 44, 40, //2112
39, 42, 43, 44, 42, 39, 35, 36, 37, 34, 32, 30, 29, 28, 24, 19, //2128
15, 15, 17, 18, 18, 13, 8, 6, 7, 12, 11, 7, 4, 5, 4, 4, //2144
2, -4, -8, -8, -2, 4, 4, 1, -2, -3, -2, -1, -6, -13, -18, -19, //2160
-14, -14, -20, -29, -36, -38, -36, -34, -39, -47, -54, -56, -50, -47, -51, -59, //2176
-64, -61, -55, -52, -55, -65, -73, -73, -69, -68, -74, -82, -89, -88, -81, -79, //2192
-85, -95, -106, -106, -99, -93, -94, -100, -106, -106, -101, -96, -99, -105, -106, -104, //2208
-99, -94, -93, -95, -94, -91, -87, -86, -86, -86, -86, -86, -86, -87, -85, -81, //2224
-78, -77, -75, -71, -68, -68, -63, -57, -53, -52, -51, -46, -40, -35, -32, -28, //2240
-24, -18, -12, -9, -7, -5, -2, 1, 1, 2, 3, 7, 10, 15, 18, 19, //2256
22, 24, 28, 33, 37, 41, 46, 51, 56, 61, 63, 62, 67, 69, 68, 70, //2272
74, 74, 76, 80, 83, 85, 88, 88, 90, 92, 93, 95, 99, 99, 97, 96, //2288
97, 98, 101, 100, 98, 96, 95, 96, 100, 101, 101, 101, 103, 106, 106, 104, //2304
102, 100, 101, 104, 102, 96, 93, 92, 90, 90, 87, 83, 80, 78, 78, 75, //2320
72, 72, 74, 77, 79, 80, 77, 74, 73, 74, 72, 69, 66, 64, 65, 66, //2336
64, 59, 57, 58, 56, 53, 48, 45, 42, 41, 40, 37, 34, 29, 25, 24, //2352
21, 20, 14, 7, 4, 4, 5, 3, 1, -1, -1, -1, 2, 1, -5, -10, //2368
-14, -19, -18, -18, -21, -25, -26, -28, -26, -23, -26, -33, -37, -37, -37, -37, //2384
-38, -39, -40, -41, -40, -39, -40, -41, -42, -42, -42, -42, -43, -43, -41, -39, //2400
-36, -33, -33, -35, -33, -32, -34, -35, -35, -33, -30, -28, -28, -29, -28, -25, //2416
-23, -23, -24, -26, -27, -23, -17, -15, -18, -19, -13, -7, -2, 0, -3, -6, //2432
-1, 6, 13, 15, 14, 14, 17, 23, 28, 31, 29, 26, 28, 32, 35, 37, //2448
37, 38, 41, 43, 45, 46, 42, 41, 43, 44, 45, 48, 48, 46, 49, 52, //2464
53, 54, 55, 55, 52, 51, 56, 62, 64, 65, 65, 66, 69, 72, 72, 70, //2480
69, 71, 73, 74, 74, 72, 71, 70, 69, 68, 66, 65, 67, 69, 68, 68, //2496
64, 59, 58, 59, 59, 57, 56, 55, 55, 55, 55, 54, 54, 53, 52, 50, //2512
49, 47, 45, 41, 37, 34, 30, 28, 27, 26, 22, 20, 18, 16, 14, 11, //2528
7, 3, 1, 2, 4, -2, -6, -11, -16, -21, -26, -32, -34, -37, -41, -44, //2544
-45, -47, -49, -52, -54, -54, -50, -51, -54, -55, -57, -58, -57, -61, -66, -69, //2560
-71, -72, -73, -76, -79, -84, -87, -87, -85, -83, -83, -83, -82, -82, -84, -86, //2576
-87, -87, -88, -88, -88, -88, -87, -86, -86, -88, -88, -86, -84, -83, -82, -82, //2592
-79, -77, -75, -71, -68, -66, -64, -65, -63, -60, -60, -61, -62, -59, -55, -53, //2608
-50, -46, -42, -39, -37, -37, -36, -33, -31, -30, -26, -23, -20, -18, -19, -21, //2624
-16, -11, -10, -8, -4, 0, 5, 7, 10, 11, 11, 14, 15, 19, 22, 21, //2640
19, 17, 17, 17, 17, 16, 18, 22, 24, 24, 26, 27, 29, 30, 33, 37, //2656
39, 41, 38, 36, 36, 36, 37, 32, 29, 29, 30, 30, 29, 30, 31, 31, //2672
33, 34, 36, 39, 41, 41, 40, 40, 40, 40, 36, 31, 28, 25, 25, 26, //2688
26, 23, 19, 17, 14, 15, 15, 15, 14, 8, 5, 3, 1, -3, -9, -13, //2704
-12, -11, -10, -11, -14, -20, -20, -18, -15, -15, -21, -25, -26, -25, -23, -24, //2720
-33, -41, -47, -50, -51, -52, -58, -64, -68, -72, -73, -72, -77, -81, -83, -87, //2736
-87, -82, -82, -82, -83, -84, -85, -84, -84, -85, -87, -88, -92, -97, -98, -97, //2752
-96, -94, -90, -93, -94, -91, -89, -88, -89, -92, -96, -95, -92, -91, -93, -94, //2768
-96, -96, -93, -86, -85, -86, -86, -83, -77, -66, -63, -65, -67, -67, -60, -53, //2784
-52, -55, -58, -58, -54, -48, -45, -46, -48, -45, -38, -33, -29, -25, -23, -25, //2800
-23, -22, -22, -21, -21, -18, -15, -14, -14, -13, -12, -12, -10, -7, -6, -4, //2816
1, 3, 4, 10, 18, 20, 22, 24, 24, 23, 23, 24, 22, 22, 24, 25, //2832
25, 31, 34, 37, 40, 42, 44, 46, 47, 49, 50, 52, 54, 53, 54, 54, //2848
54, 53, 51, 48, 46, 48, 50, 52, 54, 56, 59, 63, 66, 69, 72, 72, //2864
71, 73, 77, 78, 76, 76, 77, 79, 80, 79, 74, 71, 72, 75, 74, 74, //2880
75, 73, 74, 74, 72, 73, 72, 70, 68, 66, 64, 64, 65, 65, 63, 58, //2896
58, 58, 56, 54, 52, 51, 51, 49, 46, 42, 41, 36, 34, 33, 32, 29, //2912
23, 21, 21, 18, 13, 11, 12, 11, 11, 13, 12, 10, 10, 11, 14, 14, //2928
11, 6, 5, 4, 2, -3, -8, -12, -12, -12, -12, -14, -13, -14, -16, -15, //2944
-13, -11, -13, -14, -14, -13, -12, -11, -11, -12, -13, -15, -14, -12, -9, -6, //2960
-6, -6, -4, 0, 3, 5, 5, 5, 5, 7, 6, 6, 6, 7, 11, 10, //2976
8, 8, 9, 12, 17, 17, 17, 17, 17, 17, 20, 21, 23, 27, 29, 36, //2992
39, 41, 43, 44, 44, 46, 46, 46, 46, 46, 47, 48, 48, 49, 50, 54, //3008
55, 57, 61, 64, 65, 64, 62, 64, 66, 67, 66, 64, 64, 66, 68, 69, //3024
68, 68, 69, 71, 74, 75, 75, 73, 73, 71, 73, 74, 73, 70, 68, 68, //3040
70, 72, 72, 72, 72, 72, 73, 73, 74, 75, 73, 72, 72, 71, 72, 72, //3056
70, 69, 69, 68, 69, 70, 69, 66, 65, 66, 64, 64, 65, 63, 62, 60, //3072
58, 57, 57, 58, 56, 52, 48, 46, 48, 50, 46, 41, 38, 33, 30, 27, //3088
23, 22, 21, 18, 16, 15, 13, 11, 11, 11, 10, 7, 5, 4, 3, 1, //3104
-7, -12, -13, -13, -14, -17, -23, -26, -29, -31, -32, -32, -37, -39, -42, -43, //3120
-42, -42, -45, -49, -52, -52, -51, -54, -55, -53, -52, -51, -52, -54, -55, -54, //3136
-52, -51, -51, -51, -50, -49, -51, -53, -53, -54, -54, -55, -54, -52, -51, -51, //3152
-52, -52, -53, -51, -50, -49, -50, -50, -49, -46, -45, -45, -47, -48, -48, -44, //3168
-40, -39, -40, -41, -42, -41, -39, -38, -41, -42, -43, -42, -40, -39, -39, -40, //3184
-43, -46, -45, -43, -42, -43, -45, -49, -52, -52, -51, -50, -53, -58, -60, -57, //3200
-54, -55, -56, -59, -61, -62, -61, -60, -58, -57, -58, -58, -60, -61, -59, -57, //3216
-58, -59, -60, -61, -63, -66, -67, -68, -69, -70, -67, -65, -66, -65, -67, -68, //3232
-69, -71, -71, -70, -70, -69, -66, -63, -64, -62, -62, -64, -65, -66, -62, -60, //3248
-62, -64, -65, -65, -64, -59, -57, -56, -58, -60, -59, -61, -65, -68, -69, -69, //3264
-69, -70, -70, -71, -74, -74, -74, -77, -79, -80, -75, -73, -73, -71, -71, -74, //3280
-77, -78, -80, -80, -78, -80, -81, -81, -82, -81, -79, -80, -82, -82, -80, -80, //3296
-79, -76, -77, -78, -78, -76, -73, -72, -72, -72, -69, -66, -66, -63, -60, -59, //3312
-58, -56, -55, -53, -50, -48, -46, -47, -48, -44, -40, -37, -36, -35, -31, -27, //3328
-25, -25, -24, -24, -25, -23, -21, -18, -12, -9, -7, -7, -7, -5, -4, -4, //3344
-3, -2, -1, -1, 1, 3, 3, 2, 1, 5, 8, 10, 11, 14, 15, 13, //3360
14, 16, 17, 17, 16, 17, 18, 17, 17, 16, 15, 13, 11, 13, 16, 15, //3376
15, 17, 17, 17, 18, 18, 18, 19, 20, 22, 25, 26, 26, 25, 24, 24, //3392
25, 26, 25, 25, 28, 30, 30, 28, 27, 27, 28, 30, 29, 30, 33, 33, //3408
35, 37, 42, 42, 41, 41, 43, 47, 47, 46, 44, 44, 46, 48, 50, 54, //3424
57, 58, 59, 61, 61, 59, 59, 61, 61, 60, 61, 62, 63, 62, 61, 60, //3440
60, 59, 58, 59, 63, 66, 68, 68, 67, 68, 70, 73, 75, 76, 75, 74, //3456
76, 78, 79, 79, 78, 79, 81, 82, 82, 82, 80, 77, 75, 75, 73, 72, //3472
69, 68, 69, 68, 65, 64, 63, 63, 62, 63, 62, 65, 69, 71, 71, 70, //3488
71, 70, 72, 75, 76, 77, 77, 77, 77, 76, 75, 74, 72, 69, 67, 66, //3504
65, 66, 64, 60, 57, 56, 55, 56, 57, 55, 52, 49, 48, 49, 49, 47, //3520
46, 47, 47, 47, 46, 46, 46, 45, 45, 45, 45, 45, 46, 47, 46, 44, //3536
43, 41, 40, 40, 40, 38, 37, 37, 37, 35, 32, 29, 28, 27, 27, 27, //3552
27, 27, 29, 29, 28, 29, 31, 32, 34, 36, 38, 36, 33, 31, 31, 30, //3568
29, 30, 32, 32, 31, 30, 29, 27, 27, 28, 28, 28, 29, 29, 27, 26, //3584
26, 28, 26, 24, 24, 24, 23, 23, 24, 24, 25, 27, 27, 27, 25, 25, //3600
27, 28, 29, 29, 28, 27, 29, 30, 31, 31, 30, 29, 29, 28, 25, 23, //3616
23, 23, 22, 22, 20, 19, 18, 18, 18, 16, 16, 14, 14, 16, 19, 22, //3632
24, 25, 24, 23, 21, 20, 20, 20, 21, 23, 21, 21, 19, 18, 17, 16, //3648
15, 12, 11, 11, 10, 7, 6, 5, 2, -1, -2, 1, 1, -1, -1, 0, //3664
-1, -3, -5, -6, -7, -9, -11, -11, -12, -12, -15, -19, -21, -23, -25, -26, //3680
-27, -29, -29, -30, -33, -36, -38, -39, -39, -39, -40, -43, -45, -45, -47, -48, //3696
-49, -51, -52, -51, -50, -51, -53, -57, -62, -63, -65, -67, -69, -71, -72, -73, //3712
-73, -75, -76, -76, -77, -78, -80, -82, -85, -88, -87, -87, -89, -90, -92, -92, //3728
-91, -90, -90, -91, -91, -89, -88, -89, -91, -91, -93, -93, -91, -90, -90, -94, //3744
-96, -96, -95, -94, -93, -93, -94, -94, -94, -95, -96, -98, -98, -98, -97, -94, //3760
-92, -91, -92, -92, -90, -88, -88, -89, -89, -89, -87, -85, -81, -81, -81, -78, //3776
-73, -68, -67, -65, -66, -67, -66, -64, -61, -60, -59, -57, -56, -55, -55, -55, //3792
-56, -56, -52, -51, -51, -50, -49, -46, -44, -43, -42, -44, -44, -42, -41, -41, //3808
-40, -39, -39, -38, -37, -37, -39, -39, -37, -36, -37, -37, -37, -37, -34, -34, //3824
-34, -34, -34, -33, -34, -36, -38, -39, -39, -39, -34, -32, -31, -31, -30, -29, //3840
-28, -28, -28, -28, -30, -31, -27, -26, -28, -29, -28, -29, -28, -26, -25, -26, //3856
-26, -23, -20, -19, -21, -23, -24, -23, -23, -23, -25, -29, -29, -28, -27, -26, //3872
-26, -27, -24, -22, -22, -22, -24, -28, -27, -25, -25, -26, -28, -26, -25, -23, //3888
-21, -21, -26, -27, -25, -23, -23, -25, -26, -28, -27, -25, -25, -26, -29, -30, //3904
-31, -30, -29, -30, -32, -32, -30, -26, -26, -25, -23, -23, -24, -24, -20, -20, //3920
-22, -21, -20, -19, -18, -18, -18, -17, -16, -15, -9, -8, -7, -4, -1, 3, //3936
9, 12, 13, 14, 16, 19, 21, 24, 25, 26, 27, 29, 30, 33, 35, 36, //3952
36, 41, 45, 49, 52, 53, 53, 55, 57, 60, 62, 62, 62, 64, 67, 70, //3968
73, 76, 77, 79, 81, 85, 88, 93, 95, 97, 99, 102, 102, 104, 106, 107, //3984
107, 107, 108, 110, 110, 110, 110, 110, 111, 112, 112, 111, 109, 109, 111, 110, //4000
109, 111, 114, 114, 115, 116, 116, 117, 118, 115, 114, 115, 117, 119, 118, 118, //4016
118, 117, 113, 110, 109, 108, 107, 105, 102, 102, 103, 102, 100, 99, 97, 96, //4032
96, 95, 91, 88, 88, 83, 80, 79, 78, 76, 74, 71, 71, 69, 66, 64, //4048
62, 61, 62, 60, 57, 56, 56, 56, 54, 51, 48, 44, 40, 39, 36, 33, //4064
31, 28, 23, 22, 21, 20, 17, 13, 11, 10, 9, 6, 3, -2, -4, -6, //4080
-6, -6, -8, -10, -11, -14, -18, -20, -21, -19, -19, -22, -24, -24, -27, -28, //4096
-29, -33, -35, -36, -37, -37, -37, -38, -40, -43, -42, -41, -41, -40, -38, -39, //4112
-37, -36, -37, -38, -37, -36, -36, -37, -37, -37, -37, -36, -35, -34, -32, -31, //4128
-29, -28, -26, -24, -22, -22, -21, -19, -17, -14, -14, -13, -10, -10, -9, -8, //4144
-8, -7, -7, -6, -4, -1, 4, 7, 10, 13, 15, 18, 21, 23, 25, 28, //4160
31, 32, 33, 35, 36, 39, 41, 43, 44, 46, 49, 50, 51, 54, 54, 54, //4176
53, 52, 51, 50, 48, 46, 46, 47, 47, 46, 44, 42, 41, 40, 37, 37, //4192
38, 39, 39, 40, 42, 44, 44, 44, 43, 42, 41, 38, 36, 32, 28, 26, //4208
25, 23, 22, 21, 17, 9, 5, 3, 1, -1, -5, -8, -10, -11, -13, -13, //4224
-15, -17, -20, -23, -24, -25, -25, -25, -27, -28, -30, -33, -34, -37, -39, -41, //4240
-46, -52, -56, -58, -58, -60, -62, -65, -69, -70, -71, -72, -73, -75, -78, -82, //4256
-85, -86, -87, -87, -88, -90, -92, -96, -98, -98, -98, -98, -98, -102, -104, -104, //4272
-105, -106, -107, -108, -111, -111, -111, -112, -111, -113, -115, -116, -116, -116, -117, -118, //4288
-118, -118, -118, -120, -126, -127, -125, -121, -117, -116, -118, -118, -117, -116, -113, -109, //4304
-108, -109, -110, -110, -106, -100, -98, -95, -95, -95, -95, -94, -91, -87, -85, -85, //4320
-84, -82, -81, -80, -77, -75, -71, -72, -71, -68, -66, -62, -59, -57, -56, -53, //4336
-47, -37, -32, -28, -24, -21, -18, -14, -12, -10, -7, -4, -2, -1, 0, };