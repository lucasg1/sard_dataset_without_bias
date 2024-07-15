namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(int * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(int * data);
};
}
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    data = (int *)realloc(data, 100*sizeof(int));
    if (data == NULL) {exit(-1);}
    data[0] = 5;
    printIntLine(data[0]);
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(int * data)
{
<START>
<END>
    ; 
}
}
