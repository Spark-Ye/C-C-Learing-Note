#define _CRT_SECURE_NO_WARNINGS 1
#if 0 / 1

1.移除元素
给定一个数组 nums 和一个值 val，需要 原地 移除所有数值等于 val 的元素，
并且返回移除后数组的新长度。

不要使用额外的数组空间，必须使用 0(1) 额外空间并 原地 修改输入数组。

元素的顺序可以改变。不需要考虑数组中超出新长度后面的元素。

/*思路1：遇到等于 val 的元素，将 val 的位置之后的元素向前挪动一位
* for(遍历数组){
*	if(arr[i] == val){
*		for(挪动数据){
*		//
* 思路2：双指针法（不是真的定义指针，而是两个变量）
* 定义两个变量：src 和 dst
* 如果 src 指向的值等于 val，src++
* 否则，arr[dst] = arr[src]，src++，dst++
*/

----------------------------------------------------------------------

2.合并两个有效数组
给定两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数
m 和 n，分别表示 nums1 和 nums2 中的元素数目。

请合并 nums2 到 nums1 中，使合并后的数组同样按照 非递减顺序 排列。

注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。为
了应对这种情况，nums1 的初始长度为 m + n，其中前 m 个元素表示应合
并的元素，后 n 个元素为 0，应忽略。 nums2 的长度为 n。

/*思路1：将 nums2 中的数据直接保存到 nums1 中，通过排序算法对 nums1
* 中所有的数据同意进行排列
* 思路2：合并的同时就让其排序
* 从两个数组的最后一个有效数据开始从后往前比较，找大，谁大谁就从
* nums1 数组的最后一个位置从后往前放
*/

#endif

int removeElement_1(int* nums, int numsSize, int val)
{
	int src = 0, dst = 0;
	while (src < numsSize)
	{
		if (nums[src] == val)
			src++;
		else
		{
			nums[dst] = nums[src];
			dst++;
			src++;
		}
	}
	return dst;
}

void merge_2(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	int l1 = m - 1;
	int l2 = n - 1;
	int l3 = m + n - 1;

	while (l1 >= 0 && l2 >= 0)
	{
		if (nums1[l1] > nums2[l2])
			nums1[l3--] = nums1[l1--];
		else
			nums1[l3--] = nums2[l2--];
	}
	//要么是 l1 < 0，要么是 l2 < 0
	while (l2 >= 0)
		nums1[l3--] = nums2[l2--];
}


