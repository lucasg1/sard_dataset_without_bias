namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(FILE * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(FILE * data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(FILE * data) const
{
    if (data != NULL)
    {
        fclose(data);
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
