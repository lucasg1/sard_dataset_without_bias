namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(void * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(void * data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(void * data) const
{
    {
<START>
        size_t dataLen = strlen((char *)data);
<END>
        void * dest = (void *)calloc(dataLen+1, 1);
        memcpy(dest, data, (dataLen+1));
        printLine((char *)dest);
        free(dest);
    }
}
}
