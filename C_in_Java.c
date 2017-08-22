#include "C_in_Java.h"
JNIEXPORT jint JNICALL Java_C_1in_1Java_sum(JNIEnv *env, jobject thisObj, jintArray inJNIArray)
{
	jint *inCArray = (*env)->GetIntArrayElements(env, inJNIArray, NULL);
	jsize length = (*env)->GetArrayLength(env, inJNIArray);
	jint sum = 0;
	int i;
	for (i = 0; i < length; i++) {
		sum += inCArray[i];
	}
	float avg;
	avg = sum / (float)length;
	printf("Sum is %d.\n", sum);
	printf("Average is %f.\n", avg);
	return sum;
}
int main()
{
return  0;
}
