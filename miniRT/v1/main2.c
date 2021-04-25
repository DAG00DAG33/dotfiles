#include "geometry/libgeometry.h"
//#include "shapes/libshapes.h"
#include <math.h>
#include "display/display.h"
#include "src/src.h"


t_vector*	norm(t_vector *vec);


int main()
{

	t_camera cam;
	cam = camera(point(0, 1, 1), vector(1, 0.2, -0.1), 100);

	t_figure *data[101];
	/*data[0] = new_figure(new_sphere(point(300, 300, 300), 200), sp, color(100, 100, 100));
	data[1] = new_figure(new_sphere(point(100, 400, 500), 100), sp, color(0, 100, 100));
	data[2] = new_figure(new_sphere(point(1, 6, 2), 1), sp, color(100, 0, 100));
	data[3] = new_figure(new_sphere(point(9, 2, 5), 1.3), sp, color(0, 100, 0));
	data[4] = new_figure(new_sphere(point(7, 4, 5), 0.3), sp, color(100, 100, 0));
	data[5] = NULL;*/
	data[ 0 ] = new_figure(new_sphere(point (46, 39, -31) , 1.8 ), sp, color (131, 68, 90) );
	data[ 1 ] = new_figure(new_sphere(point (33, -33, 3) , 7.8 ), sp, color (109, 145, 184) );
	data[ 2 ] = new_figure(new_sphere(point (30, 17, -50) , 4.4 ), sp, color (83, 97, 237) );
	data[ 3 ] = new_figure(new_sphere(point (33, -6, 1) , 2.8 ), sp, color (175, 86, 21) );
	data[ 4 ] = new_figure(new_sphere(point (51, 52, 8) , 3.2 ), sp, color (214, 1, 136) );
	data[ 5 ] = new_figure(new_sphere(point (41, -47, -32) , 10.0 ), sp, color (202, 18, 150) );
	data[ 6 ] = new_figure(new_sphere(point (41, 43, 54) , 3.8 ), sp, color (51, 186, 223) );
	data[ 7 ] = new_figure(new_sphere(point (40, -51, -18) , 9.4 ), sp, color (210, 11, 0) );
	data[ 8 ] = new_figure(new_sphere(point (38, 45, -40) , 10.4 ), sp, color (59, 186, 151) );
	data[ 9 ] = new_figure(new_sphere(point (47, 28, -16) , 11.4 ), sp, color (72, 11, 111) );
	data[ 10 ] = new_figure(new_sphere(point (53, -21, -58) , 1.6 ), sp, color (23, 122, 39) );
	data[ 11 ] = new_figure(new_sphere(point (48, -17, -18) , 4.6 ), sp, color (232, 87, 99) );
	data[ 12 ] = new_figure(new_sphere(point (36, 5, 20) , 11.8 ), sp, color (132, 160, 189) );
	data[ 13 ] = new_figure(new_sphere(point (47, 28, 51) , 3.0 ), sp, color (178, 211, 19) );
	data[ 14 ] = new_figure(new_sphere(point (43, 34, -25) , 0.4 ), sp, color (217, 220, 89) );
	data[ 15 ] = new_figure(new_sphere(point (44, -17, 14) , 9.4 ), sp, color (85, 71, 47) );
	data[ 16 ] = new_figure(new_sphere(point (53, -27, -1) , 6.6 ), sp, color (54, 168, 214) );
	data[ 17 ] = new_figure(new_sphere(point (41, -25, 15) , 11.2 ), sp, color (138, 61, 45) );
	data[ 18 ] = new_figure(new_sphere(point (57, -10, 18) , 3.0 ), sp, color (92, 150, 127) );
	data[ 19 ] = new_figure(new_sphere(point (49, 54, -18) , 11.4 ), sp, color (205, 136, 91) );
	data[ 20 ] = new_figure(new_sphere(point (48, -26, 43) , 2.4 ), sp, color (176, 8, 163) );
	data[ 21 ] = new_figure(new_sphere(point (36, -40, -23) , 10.0 ), sp, color (94, 114, 219) );
	data[ 22 ] = new_figure(new_sphere(point (54, -56, 49) , 1.2 ), sp, color (173, 84, 237) );
	data[ 23 ] = new_figure(new_sphere(point (37, 32, -14) , 1.2 ), sp, color (237, 164, 226) );
	data[ 24 ] = new_figure(new_sphere(point (49, -44, -18) , 6.6 ), sp, color (153, 7, 232) );
	data[ 25 ] = new_figure(new_sphere(point (30, 26, 53) , 4.8 ), sp, color (173, 22, 136) );
	data[ 26 ] = new_figure(new_sphere(point (36, 47, -44) , 1.0 ), sp, color (70, 145, 173) );
	data[ 27 ] = new_figure(new_sphere(point (46, 12, 20) , 0.4 ), sp, color (255, 130, 181) );
	data[ 28 ] = new_figure(new_sphere(point (32, 7, -20) , 10.0 ), sp, color (240, 208, 188) );
	data[ 29 ] = new_figure(new_sphere(point (50, -23, -55) , 2.2 ), sp, color (132, 167, 126) );
	data[ 30 ] = new_figure(new_sphere(point (36, 50, -1) , 4.8 ), sp, color (151, 217, 39) );
	data[ 31 ] = new_figure(new_sphere(point (54, 27, 46) , 2.0 ), sp, color (195, 8, 229) );
	data[ 32 ] = new_figure(new_sphere(point (48, 29, 6) , 8.6 ), sp, color (174, 93, 7) );
	data[ 33 ] = new_figure(new_sphere(point (47, 26, 37) , 0.6 ), sp, color (114, 42, 208) );
	data[ 34 ] = new_figure(new_sphere(point (59, 26, -54) , 3.4 ), sp, color (49, 205, 128) );
	data[ 35 ] = new_figure(new_sphere(point (56, -4, -21) , 11.8 ), sp, color (125, 148, 111) );
	data[ 36 ] = new_figure(new_sphere(point (55, 47, 4) , 10.6 ), sp, color (138, 203, 130) );
	data[ 37 ] = new_figure(new_sphere(point (56, -41, -27) , 9.0 ), sp, color (255, 172, 197) );
	data[ 38 ] = new_figure(new_sphere(point (30, -23, -17) , 0.2 ), sp, color (60, 251, 53) );
	data[ 39 ] = new_figure(new_sphere(point (31, 48, 31) , 0.2 ), sp, color (145, 190, 190) );
	data[ 40 ] = new_figure(new_sphere(point (59, -13, -60) , 3.6 ), sp, color (228, 79, 49) );
	data[ 41 ] = new_figure(new_sphere(point (47, 13, -1) , 6.6 ), sp, color (236, 146, 57) );
	data[ 42 ] = new_figure(new_sphere(point (53, -13, -11) , 7.8 ), sp, color (12, 136, 27) );
	data[ 43 ] = new_figure(new_sphere(point (43, 6, -28) , 12.0 ), sp, color (75, 238, 163) );
	data[ 44 ] = new_figure(new_sphere(point (32, -50, 9) , 9.6 ), sp, color (248, 137, 79) );
	data[ 45 ] = new_figure(new_sphere(point (55, -22, -19) , 10.8 ), sp, color (189, 144, 238) );
	data[ 46 ] = new_figure(new_sphere(point (59, -45, -58) , 9.6 ), sp, color (114, 26, 3) );
	data[ 47 ] = new_figure(new_sphere(point (52, -25, 4) , 7.8 ), sp, color (181, 126, 7) );
	data[ 48 ] = new_figure(new_sphere(point (59, -52, 58) , 2.6 ), sp, color (247, 70, 139) );
	data[ 49 ] = new_figure(new_sphere(point (37, -13, -30) , 3.8 ), sp, color (76, 5, 198) );
	data[ 50 ] = new_figure(new_sphere(point (31, -20, 7) , 5.0 ), sp, color (176, 121, 185) );
	data[ 51 ] = new_figure(new_sphere(point (35, 2, 40) , 5.6 ), sp, color (157, 138, 189) );
	data[ 52 ] = new_figure(new_sphere(point (39, -28, -13) , 2.6 ), sp, color (138, 16, 131) );
	data[ 53 ] = new_figure(new_sphere(point (57, -58, -11) , 2.4 ), sp, color (152, 58, 205) );
	data[ 54 ] = new_figure(new_sphere(point (31, -29, -34) , 2.0 ), sp, color (149, 239, 135) );
	data[ 55 ] = new_figure(new_sphere(point (55, -17, -26) , 8.2 ), sp, color (137, 129, 109) );
	data[ 56 ] = new_figure(new_sphere(point (60, 18, -36) , 7.0 ), sp, color (252, 145, 18) );
	data[ 57 ] = new_figure(new_sphere(point (56, 40, -18) , 7.0 ), sp, color (98, 94, 190) );
	data[ 58 ] = new_figure(new_sphere(point (38, 30, 47) , 9.8 ), sp, color (104, 165, 201) );
	data[ 59 ] = new_figure(new_sphere(point (52, 28, -38) , 2.2 ), sp, color (205, 45, 238) );
	data[ 60 ] = new_figure(new_sphere(point (30, -41, 18) , 9.8 ), sp, color (251, 210, 232) );
	data[ 61 ] = new_figure(new_sphere(point (58, -46, 57) , 9.4 ), sp, color (250, 117, 44) );
	data[ 62 ] = new_figure(new_sphere(point (47, -29, 13) , 10.8 ), sp, color (163, 149, 85) );
	data[ 63 ] = new_figure(new_sphere(point (60, -28, 21) , 10.4 ), sp, color (177, 99, 19) );
	data[ 64 ] = new_figure(new_sphere(point (53, -40, 21) , 3.4 ), sp, color (116, 93, 184) );
	data[ 65 ] = new_figure(new_sphere(point (37, 25, 54) , 2.0 ), sp, color (100, 142, 151) );
	data[ 66 ] = new_figure(new_sphere(point (39, 16, -37) , 7.4 ), sp, color (104, 34, 164) );
	data[ 67 ] = new_figure(new_sphere(point (41, 51, 3) , 7.2 ), sp, color (74, 53, 220) );
	data[ 68 ] = new_figure(new_sphere(point (52, -51, -15) , 5.2 ), sp, color (58, 66, 210) );
	data[ 69 ] = new_figure(new_sphere(point (35, -30, 29) , 10.4 ), sp, color (152, 29, 98) );
	data[ 70 ] = new_figure(new_sphere(point (49, 46, -54) , 10.4 ), sp, color (55, 9, 223) );
	data[ 71 ] = new_figure(new_sphere(point (59, -2, 54) , 4.2 ), sp, color (38, 252, 146) );
	data[ 72 ] = new_figure(new_sphere(point (59, 5, -21) , 4.6 ), sp, color (149, 71, 157) );
	data[ 73 ] = new_figure(new_sphere(point (55, 35, -53) , 9.4 ), sp, color (32, 12, 76) );
	data[ 74 ] = new_figure(new_sphere(point (38, -17, -32) , 0.8 ), sp, color (125, 165, 42) );
	data[ 75 ] = new_figure(new_sphere(point (34, 3, -35) , 4.0 ), sp, color (127, 69, 46) );
	data[ 76 ] = new_figure(new_sphere(point (32, 6, -39) , 3.0 ), sp, color (90, 22, 16) );
	data[ 77 ] = new_figure(new_sphere(point (51, 56, -26) , 10.0 ), sp, color (156, 214, 7) );
	data[ 78 ] = new_figure(new_sphere(point (31, 8, 17) , 10.2 ), sp, color (113, 36, 5) );
	data[ 79 ] = new_figure(new_sphere(point (44, -37, -23) , 12.0 ), sp, color (80, 27, 239) );
	data[ 80 ] = new_figure(new_sphere(point (56, -44, -45) , 10.8 ), sp, color (158, 105, 100) );
	data[ 81 ] = new_figure(new_sphere(point (48, 58, -1) , 3.2 ), sp, color (173, 130, 69) );
	data[ 82 ] = new_figure(new_sphere(point (37, 47, -15) , 8.4 ), sp, color (60, 175, 108) );
	data[ 83 ] = new_figure(new_sphere(point (50, 52, -18) , 0.6 ), sp, color (84, 156, 158) );
	data[ 84 ] = new_figure(new_sphere(point (43, -23, 6) , 3.4 ), sp, color (72, 186, 200) );
	data[ 85 ] = new_figure(new_sphere(point (39, 38, -10) , 4.8 ), sp, color (131, 17, 122) );
	data[ 86 ] = new_figure(new_sphere(point (56, 49, -34) , 2.2 ), sp, color (121, 176, 165) );
	data[ 87 ] = new_figure(new_sphere(point (59, 2, 44) , 3.8 ), sp, color (103, 43, 63) );
	data[ 88 ] = new_figure(new_sphere(point (50, -8, -43) , 8.4 ), sp, color (200, 86, 51) );
	data[ 89 ] = new_figure(new_sphere(point (43, -29, 45) , 9.6 ), sp, color (189, 137, 162) );
	data[ 90 ] = new_figure(new_sphere(point (59, -1, -56) , 2.4 ), sp, color (214, 41, 154) );
	data[ 91 ] = new_figure(new_sphere(point (55, 7, 12) , 0.8 ), sp, color (140, 123, 176) );
	data[ 92 ] = new_figure(new_sphere(point (42, 14, -47) , 7.2 ), sp, color (226, 118, 211) );
	data[ 93 ] = new_figure(new_sphere(point (60, -14, -48) , 10.0 ), sp, color (106, 30, 48) );
	data[ 94 ] = new_figure(new_sphere(point (54, -18, -33) , 0.8 ), sp, color (84, 175, 90) );
	data[ 95 ] = new_figure(new_sphere(point (54, 17, -58) , 3.4 ), sp, color (104, 176, 221) );
	data[ 96 ] = new_figure(new_sphere(point (47, 2, -35) , 0.2 ), sp, color (169, 162, 42) );
	data[ 97 ] = new_figure(new_sphere(point (60, -55, -58) , 8.4 ), sp, color (157, 233, 62) );
	data[ 98 ] = new_figure(new_sphere(point (35, 51, -49) , 2.4 ), sp, color (101, 41, 223) );
	data[ 99 ] = new_figure(new_sphere(point (38, -4, -60) , 1.4 ), sp, color (139, 143, 50) );
	data[100] = NULL;

	t_light	*lights[2];
	lights[0] = new_light(point(10, 10, 10), 1);
	lights[1] = NULL;

	/*t_figure *fig;
	while (fig = figure_iter(data, NULL))
		print_figure(fig);*/

	main_loop(data, cam, lights);
}
