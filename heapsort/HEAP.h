#pragma once
template <typename T>
typedef struct HEAP
{                                  ////////////////////////
	int HeapSize;                  //�����иö�Ԫ�صĸ���//
	int length;                    //     ���鳤��       //
	T* HeapArray=new T[length]     //   Ϊ��������ڴ�   //
};                                 ////////////////////////
template<typename T>               //                    //
T TMIN(template T);                //���ض�Ӧ���͵���Сֵ//
inline  int PARENT(int i) noexcept{ return (i+1)/2 - 1;   }
//����i�ĸ��ڵ�
inline  int LEFT  (int i) noexcept{ return 2*(i+1)-1;     }
//����i�����ӽڵ�
inline  int RIGHT (int i) noexcept{ return 2*(i+1); }
//����i�����ӽڵ�
template <typename T>                 ////////////////////////////////
void MAX_HEAPIFY(HEAP<T>& heap,int i);//ά���������ʣ�O(lgn)��    //
template <typename T>                 //                            //
void BUILD_MAX_HEAP(HEAP<T>& heap);   //����һ�����ѣ�O(n)��      //
template <typename T>                 //                            //
void HEAPSORT(HEAP<T>& heap);         //������<ԭַ����>��O(nlgn)�� //
                                      ////////////////////////////////


/*___________________________________________*/
/*                                           */
/*    ���������ö�������һ��������ȶ���   */
/*                                           */
/*___________________________________________*/


template <typename T>                        //_________________________________________________
void MAX_HEAP_INSERT(HEAP<T>& heap,T key);   // ��x���뵽�����У�O(lgn)��
template <typename T>                        //
T HEAP_EXTRACT_MAX(HEAP<T>& heap);           //���ز�ȥ�������о������ؼ��ʵ�Ԫ�أ�O(lgn)��
template <typename T>                        //
T HEAP_MAXIMUM(const HEAP<T>& heap);         //���ض����Ԫ�أ�O(1)��
template <typename T>                        //
bool HEAP_INCREASE_KEY                       //
(HEAP<T>& heap, int i, T key);               //���������±�Ϊi��Ԫ�عؼ������ӵ�key��O(lgn)��
                                             //__________________________________________________


