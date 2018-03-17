#pragma once
template <typename T>
typedef struct HEAP
{
	int HeapSize;//�����иö�Ԫ�صĸ���
    int length;//���鳤��
	T* HeapArray=new T[length]//Ϊ��������ڴ�
}; 
inline  int PARENT(int i) noexcept{ return (i+1)/2 - 1;   }
//����i�ĸ��ڵ�
inline  int LEFT  (int i) noexcept{ return 2*(i+1)-1;     }
//����i�����ӽڵ�
inline  int RIGHT (int i) noexcept{ return 2*(i+1); }
//����i�����ӽڵ�
template <typename T>
void MAX_HEAPIFY(HEAP<T>& heap,int i);//ά���������ʣ�O(lgn)��
template <typename T>
void BUILD_MAX_HEAP(HEAP<T>& heap);//����һ�����ѣ�O(n)��
template <typename T>
void HEAPSORT(HEAP<T>& heap);      //������O(nlgn)��
template <typename T>
MAX_HEAP_INSERT(HEAP<T>& heap);    
template <typename T>
HEAP_EXTRACT_MAX(HEAP<T> heap);
template <typename T>
HEAP_MAXIMUM(HEAP<T> heap);


