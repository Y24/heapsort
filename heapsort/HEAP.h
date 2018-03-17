#pragma once
template <typename T>
typedef struct HEAP
{
	int HeapSize;//数组中该堆元素的个数
    int length;//数组长度
	T* HeapArray=new T[length]//为数组分配内存
}; 
inline  int PARENT(int i) noexcept{ return (i+1)/2 - 1;   }
//返回i的父节点
inline  int LEFT  (int i) noexcept{ return 2*(i+1)-1;     }
//返回i的左子节点
inline  int RIGHT (int i) noexcept{ return 2*(i+1); }
//返回i的右子节点
template <typename T>
void MAX_HEAPIFY(HEAP<T>& heap,int i);//维护最大堆性质（O(lgn)）
template <typename T>
void BUILD_MAX_HEAP(HEAP<T>& heap);//建立一个最大堆（O(n)）
template <typename T>
void HEAPSORT(HEAP<T>& heap);      //堆排序（O(nlgn)）
template <typename T>
MAX_HEAP_INSERT(HEAP<T>& heap);    
template <typename T>
HEAP_EXTRACT_MAX(HEAP<T> heap);
template <typename T>
HEAP_MAXIMUM(HEAP<T> heap);


