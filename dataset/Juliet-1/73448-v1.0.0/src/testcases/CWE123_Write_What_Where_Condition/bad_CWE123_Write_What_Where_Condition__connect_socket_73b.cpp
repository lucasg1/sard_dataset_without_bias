typedef struct _linkedList
{
    struct _linkedList *next;
    struct _linkedList *prev;
} linkedList;
typedef struct _FUN1Struct
{
    linkedList list;
} FUN1Struct;
static linkedList *linkedListPrev, *linkedListNext;
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<FUN1Struct> dataList);
void FUN1()
{
    FUN1Struct data;
    list<FUN1Struct> dataList;
    linkedList head = { &head, &head };
    data.list.next = head.next;
    data.list.prev = head.prev;
    head.next = &data.list;
    head.prev = &data.list;
    {
        WSADATA wsaData;
        int wsaDataInit = 0;
        int recvResult;
        struct sockaddr_in service;
        SOCKET connectSocket = INVALID_SOCKET;
        do
        {
            if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
            {
                break;
            }
            wsaDataInit = 1;
            connectSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
            if (connectSocket == INVALID_SOCKET)
            {
                break;
            }
            memset(&service, 0, sizeof(service));
            service.sin_family = AF_INET;
            service.sin_addr.s_addr = inet_addr(IP_ADDRESS);
            service.sin_port = htons(TCP_PORT);
            if (connect(connectSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
            {
                break;
            }
            recvResult = recv(connectSocket, (char*)&data, sizeof(data), 0);
            if (recvResult == SOCKET_ERROR || recvResult == 0)
            {
                break;
            }
        }
        while (0);
        if (connectSocket != INVALID_SOCKET)
        {
            CLOSE_SOCKET(connectSocket);
        }
        if (wsaDataInit)
        {
            WSACleanup();
        }
    }
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
typedef struct _linkedList
{
    struct _linkedList *next;
    struct _linkedList *prev;
} linkedList;
typedef struct _FUN1Struct
{
    linkedList list;
} FUN1Struct;
static linkedList *linkedListPrev, *linkedListNext;
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<FUN1Struct> dataList)
{
    FUN1Struct data = dataList.back();
    linkedListPrev = data.list.prev;
    linkedListNext = data.list.next;
<START>
    linkedListPrev->next = linkedListNext;
    linkedListNext->prev = linkedListPrev;
<END>
}
} 
