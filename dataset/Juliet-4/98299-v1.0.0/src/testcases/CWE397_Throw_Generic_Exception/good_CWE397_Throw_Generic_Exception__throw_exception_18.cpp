using namespace std; 
namespace NAMESPACE0
{
void FUN0()
{
    goto sink;
sink:
    throw range_error("Test");
}
} 
