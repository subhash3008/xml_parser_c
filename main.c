#include "lxml.h"

int main()
{
  XMLDocument doc;
  if(XMLDocument_load(&doc, "test.xml"))
  {
    XMLNode* main_node = XMLNode_child(doc.root, 0);
    printf("%s => %s\n", main_node->tag, main_node->inner_text);
    XMLNode* another_node = XMLNode_child(doc.root, 1);
    printf("Children of another node => %d\n", another_node->children.size);


    // printf("%s: %s\n", doc.root->tag, doc.root->inner_text);
    // XMLNode node = *doc.root;
    // printf("Attributes : \n");
    // for (int i = 0; i < node.attributes.size; ++i)
    // {
    //   XMLAttribute attr = node.attributes.data[i];
    //   printf("%s : \"%s\"\n", attr.key, attr.value);
    // }

    // XMLNode* more_node = XMLNode_child(XMLNode_child(doc.root, 0), 0);

    // printf("%s => %s\n", more_node->tag, more_node->inner_text);

    // XMLNode* another_node = XMLNode_child(doc.root, 1);
    // printf("%s => %s\n", another_node->tag, another_node->inner_text);

    XMLDocument_free(&doc);
  }
  return 0;
}