//#include <stdio.h>
//
//int main()
//{
//	float temperature = 36.5f;
//
//	float humidity = 48.3f;
//
//	float speed_of_sound = 32.5e2f;
//
//	float length = 12.34f, width = 23.45f, height = 34.56f;
//
//	printf("Temperature : %f\n", temperature);
//	printf("Humidity : %f\n", humidity);
//	printf("Speed of Sound : %f\n", speed_of_sound);
//	printf("Dimensions (LxWxHx) : %f x %f x %f\n", length, width, height );
//
//	double sNum = 100.3;
//	printf("sNum : %lf\n", sNum);
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//
//	float num = 123.456f;
//	//%f
//	printf("Using %%f : %f\n", num);
//	// %e %E ��ѧ��������ʽ�����
//	printf("Using %%e : %e\n", num);
//	printf("Using %%E : %E\n", num);
//	// %a %A ʮ�����Ƹ����� p������
//	printf("Using %%a : %a\n", num);
//	printf("Using %%A : %A\n", num);
//
//	return 0;
//}

//#include <stdio.h>
//#include <float.h>
//
//int main() {
//
//	float max_float = FLT_MAX;
//
//	float overfloat = max_float * 1000.0f;
//
//	//OverFlow����
//
//	float min_float = FLT_MIN;
//
//	//UnderFlow����
//
//	float underflow = min_float / 1000.0f;
//
//	printf("Maxfloat : %e\n", max_float);
//	printf("Over Float : %e\n", overfloat);//infinity�������
//	printf("Minimum Positive Float : %e\n", min_float);
//	printf("Underflow : %e\n", underflow);
//
//	return 0;
//}


//#include <stdio.h>
//#include <float.h>
//#include <math.h>
//
//int main() {
//	
//	// �������
//	float positive_infinity = INFINITY;
//	printf("Positive Infinity : %f\n", positive_infinity);
//
//	// �������
//	float negative_infinity = -INFINITY;
//	printf("Negative infinity : %f\n", negative_infinity);
//
//	// ����������������
//	float num = 1.0f;
//	float infinity = num / 0.0f;
//	printf("1.0 / 0.0 : %f\n", infinity);
//	//Nan Not a number
//	float zero1 = 0.0f;
//	float zero2 = 0.0f;
//	float nan = zero1 / zero2;
//	printf("0.0 / 0.0 : %f\n", nan );
//
//	float number = sqrt(4);
//	printf("sqrt(4) = %f\n", number);
//
//	float negative_num = sqrt(-1.0f);
//	printf("sqrt(1.0) = %f\n", negative_num);
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//
//	float number = 3.15f;
//	printf("1-> : %.1f\n", number);
//
//	number = 3.25f;
//	printf("2-> : %.1f\n", number);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//
//	double num1 = 123.456;
//	double num2 = 765.432;
//
//	double num = num1 + num2;
//	double difference = num1 - num2;
//	double product = num1 * num2;
//	double quotient = num1 / num2;
//	long double ld_val = 1234.43444444L;
//
//	printf("Num : %f\n", num);
//	printf("Differnce : %f\n", difference);
//	printf("Product : %f\n", product);
//	printf("Quotient : %f\n", quotient);
//	printf("Long double : %f\n", ld_val);
//
//	return 0;
//}



//#include <stdio.h>
//#include <float.h>
//int main() {
//
//	float float_num = 1.0 / 3.0;
//	double double_num = 1.0 / 3.0;
//
//	printf("Float precision : %.20f\n", float_num);
//	printf("Double precision : %.20f\n", double_num);
//
//	printf("Defined max precision for float : %d\n", FLT_DIG);
//	printf("Defined max precision for double : %d\n", DBL_DIG);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//
//	char mych = 'A';
//	printf("Mych : %c\n", mych);
//
//	int mychar = 97;
//	printf("Mychar : %c\n", mychar);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	
//	printf("A");
//	printf("%\033[2J");
//	printf("\033[%d;%dH", 3, 3);
//
//	return 0;
//}
//#include <stdio.h>

//int main() {
//
//	printf("��һ���ı�\n\t���ڶ����ı�\n\t\t�����������������ı�\n");
//	printf("���ԣ�\"C����\"\n");
//	printf("ת��������ϰ\t");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdbool.h>
//
//int main() {
//
//	bool is_game_over = false;
//	bool is_game_won = true;
//
//	printf("Is_game_over : %d\n", is_game_over);
//	printf("Is_game_won : %d\n", is_game_won);
//
//	return 0;
//}


//#include <stdio.h>
//#define PI 3.14
//int main() {
//
//	const int MAX_USERS = 100;
//	
//	printf("MAX_USERS : %d\n", MAX_USERS);
//	printf("PI : %lf\n", PI);
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main() {
//	// ���ݶ���
//	// ��ֵLvalue
//	// ��ֵRvalue
//	// �����
//	uint32_t apple_box = 5;
//
//	uint32_t orange_box = 10;
//
//	printf("ƻ���������� %"PRIu32"��ƻ��\n",apple_box);
//	printf("���Ӻ������� %"PRIu32"������\n", orange_box);
//
//	uint32_t total_fruit = apple_box + orange_box;
//
//	printf("�������ܹ��� %"PRIu32"��ˮ��\n", total_fruit);
//	// ��ע�⣬�����x,y,z�����ǲ��Գ��򣬲���ʵ�����塣
//	uint32_t x, y, z;
//
//	//���ظ�ֵ(ʵ���в��ǳ���)
//	x = y = z = 10;
//
//	printf("x : %"PRIu32"\n", x);
//	printf("y : %"PRIu32"\n", y);
//	printf("z : %"PRIu32"\n", z);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main() {
//
//	uint32_t apples = 10;
//	uint32_t oranges = 5;
//
//	//��������
//	uint32_t totalFruits = apples + oranges;//�ӷ�
//	uint32_t remainingApples = apples - 2;//����
//	uint32_t appleBoxes = apples * 10;//�˷�
//	uint32_t fruitsPerFriend = totalFruits / 2;//����
//	uint32_t remainingFruits = totalFruits % 3;//ȡģ
//
//	//������
//	printf("�ܹ��� %"PRIu32"��ˮ��\n", totalFruits);
//	printf("�������ǳԵ�����ƻ���󣬾ͻ�ֻʣ�� %"PRIu32"��ƻ��\n", remainingApples);
//	printf("10�����ӿ���װ %"PRIu32"��ƻ��\n", appleBoxes);
//	printf("����������15��ˮ�����ָ��������ѣ�����ÿ�����ѿ��Էֵ� %"PRIu32"��ˮ��\n", totalFruits);
//	printf("��������15��ˮ���ָ������ˣ���ô�����ʣ %"PRIu32"��ˮ��\n", remainingFruits);
//
//	return 0;
//}

//һԪ�Ͷ�Ԫ�����
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main() {
//
//	int32_t number_1 = 10;
//	int32_t number_2 = -number_1;
//	int32_t total_number = -(number_1 + number_2);
//
//	printf("Number_1 : %"PRId32"\n", number_1);
//	printf("Number_2 : %"PRId32"\n", number_2);
//	printf("Total_Number : %"PRId32"\n", total_number);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main() {
//
//	int32_t value = 5;
//	int32_t result = value++;
//
//	printf("After potive increment, result = %" PRId32 ",value = %" PRId32 "\n", result, value);
//
//	value = 5;
//
//	int32_t result_1 = ++value;
//
//	printf(" result_1 = %" PRId32 ", value_1 = %" PRId32 "\n", result_1, value);
//
//	value = 5;
//	int32_t result_2 = value--;
//
//	printf("result_2 = %" PRId32 ",value = %" PRId32 "\n",result_2, value);
//
//	value = 5;
//	int32_t result_3 = --value;
//
//	printf("result_3 = %" PRId32 ",value = %" PRId32 "\n", result_3, value);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main() {
//
//	uint8_t num = 22;
//	printf("Original number : %" PRIu8 " (binary : 00010110)\n", num);
//
//  //����
//	uint8_t left_shifted = num << 2;
//	printf("Left shifted by 2 : %" PRIu8 " (binary : 01011000)\n", left_shifted);
//  //����
//	uint8_t right_shifted = num >> 2;
//	printf("Right shifted by 2 : %" PRIu8 " (binary : 00000101)\n", right_shifted);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
////int main() {
////
////	int num = -75;
////
////	int maltiply_by2 = num << 30;
////	int divide_by2 = num >> 1;
////
////	printf("%d x 2^30 = %d\n", num, maltiply_by2);
////	printf("%d / 2 = %d\n", num, divide_by2);
////
////	return 0;
////}