#include "lxml.h"

int main()
{
  XMLDocument doc;
  if(XMLDocument_load(&doc, "test.xml"))
  {
    printf("%s: %s\n", doc.root->tag, doc.root->inner_text);
    XMLNode node = *doc.root;
    printf("Attributes : \n");
    for (int i = 0; i < node.attributes.size; ++i)
    {
      XMLAttribute attr = node.attributes.data[i];
      printf("%s : \"%s\"\n", attr.key, attr.value);
    }
    XMLDocument_free(&doc);
  }
  return 0;
}