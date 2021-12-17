#pragma once
typedef struct nodeRecord* Nodeptr;
typedef struct nodeRecord
{
    int Data; // 데이터값
    Nodeptr Next; // 다음 노드 주소
} NODE;

class CLinkedList
{
private:
    NODE *Head, *Tail; //첫번째노드, 마지막노드
public:
    CLinkedList(void); // 생성자
    ~CLinkedList(void); // 소멸자

    void Add(int Item); // 요소추가

    void Remove(int Item); // 요소제거
    void RemoveLastNode(); // 마지막노드 제거
    void RemoveAll(); // 모든 요소 제거

    int Count(); //카운트 함수

    void PrintAllList(); // 모든 리스트 출력
};