#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include<assert.h>

/* 双向链表结构体 */
typedef struct _DOUBLE_LINK_NODE {
    int data;
    struct _DOUBLE_LINK_NODE *prev;
    struct _DOUBLE_LINK_NODE *next;
} DOUBLE_LINK_NODE;

/* 创建双向链表节点 */
DOUBLE_LINK_NODE* create_duble_link_node(int value)
{
    DOUBLE_LINK_NODE *pDLinkNode = NULL;

    //分配内存
    pDLinkNode = (DOUBLE_LINK_NODE*)malloc(sizeof(DOUBLE_LINK_NODE));

    assert(NULL != pDLinkNode);

    //初始化
    memset(pDLinkNode, 0, sizeof(DOUBLE_LINK_NODE));

    pDLinkNode->data = value;

    return pDLinkNode;
}

/* 删除单身链表 */
void delete_all_double_link_node( DOUBLE_LINK_NODE **ppDLinkNode )
{

}

/* 查找 */
DOUBLE_LINK_NODE* find_data_in_double_link(const DOUBLE_LINK_NODE *pDLinkNode, int data)
{
    return (DOUBLE_LINK_NODE *)pDLinkNode;
}

/* 插入数据 */
int insert_data_in_double_link(DOUBLE_LINK_NODE *pDLinkNode, int data)
{
    DOUBLE_LINK_NODE *pNode;
    DOUBLE_LINK_NODE *pIndex;

    /*
    if ( NULL == ppDLinkNode ) {
        return 0;
    }

    if ( NULL == *ppDLinkNode ) {
        pNode = create_duble_link_node( data );
        assert(NULL != pNode);
        *ppDLinkNode = pNode;
        //(*ppDLinkNode)->prev = (*ppDLinkNode)->next = NULL;
        pNode->prev = pNode->next = NULL;
        return 1;
    }
    */

    /* 查找数据是否存在 */
    //

    pNode = create_duble_link_node( data );

    assert( NULL != pNode );

    pIndex = pDLinkNode;
    while (NULL != pIndex->next) {
        pIndex = pIndex->next;
    }

    pNode->prev = pIndex;
    pNode->next = pIndex->next;
    pIndex->next = pNode;

    return 1;
}   

/* 删除数据 */
int delete_data_from_double_link(DOUBLE_LINK_NODE **ppDLinkNode, int data)
{
    return 0;
}

/* 统计个数 */
int count_member_in_double_link(const DOUBLE_LINK_NODE *pDLinkNode)
{
    int count = 0;
    DOUBLE_LINK_NODE *pNode = (DOUBLE_LINK_NODE *)pDLinkNode;

    while( pNode != NULL ){
        count++;
        pNode = pNode->next;
    }
    
    return count;
}

/* 打印 */
void print_double_link(const DOUBLE_LINK_NODE *pDLinkNode)
{
    DOUBLE_LINK_NODE *p = (DOUBLE_LINK_NODE *)pDLinkNode;

    while(NULL != p){
        printf("%d \t", p->data);
        p = p->next;
    }
}

int main(void)
{
    DOUBLE_LINK_NODE *p = NULL;

    printf("sizeof(int): %d \n", sizeof(int));
    printf("sizeof(DOUBLE_LINK_NODE)：%d \n", sizeof(DOUBLE_LINK_NODE));

    p = create_duble_link_node(1);
    insert_data_in_double_link(p, 3);
    insert_data_in_double_link(p, 2);
    insert_data_in_double_link(p, 4);
    
    printf("%s \n", "==============");

    printf("共%d个元素\n", count_member_in_double_link(p));

    printf("%s \n", "==============");

    print_double_link(p);

    return 0;
}


