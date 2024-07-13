//
//  main.cpp
//  Map_vs_unourderedmap
//
//  Created by Bharanidharan Subramani on 13/07/24.
//

#include <iostream>
#include <map>
#include <unordered_map>

int main(int argc, const char * argv[]) {
    
    std::cout << "Map vs unorded map\n";
    
    std::map<int,int> map_integers; //map<key,value>
    
    //map data created with unordered data (3,2,1)keys using
    //Initialization Using Assignment and Subscript Operator
    //map stores as red black tree : O(log n)
    
    map_integers[3]=30;
    map_integers[2]=20;
    map_integers[1]=10;
    
    /*printing data in map :
    map iterator of first provide keys and
    map iterator of second provides values*/
    
    /*map stores data in ordered way eventhough
    data are inserted in unorderedway*/
    
    std::cout<<std::endl<<" Printing Ordered map ";
    
    for(auto mapitr=map_integers.begin(); mapitr != map_integers.end(); mapitr++)
    {
        std::cout<<std::endl<<" key "<<mapitr->first
                            <<" value "<<mapitr->second;
    }
    
    std::cout<<std::endl;
    
    /*Initializig map
     Initialization Using Assignment and Subscript Operator
     Initialization using an Initializer List
     Initialization From Another Map Using insert() Method
     Initialization From Another Map Using the Copy Constructor

     */
    std::cout<<std::endl<<"------------------------------- ";
    
    std::map<int,std::string> map_initalizerlist;
    
    std::cout<<std::endl<<" Map Initializer List";
    map_initalizerlist={
                         {1,"one"},
                         {2,"two"},
                         {3,"three"}
                       
                       };
    
    std::cout<<std::endl<<" Printing Map Initializer list using range based for loop";
    
    for(auto map_val:map_initalizerlist)
    {
        std::cout<<std::endl<<" key "<<map_val.first
        <<" value "<<map_val.second;
    }
    
    
    
    std::cout<<std::endl<<"------------------------------- ";
    
    std::map<int,std::string> new_map;
    
    std::cout<<std::endl<<" Initializing new map with insert method ";
    
    new_map.insert(map_initalizerlist.begin(),map_initalizerlist.end());
    
    std::cout<<std::endl<<" Printing Map using range based for loop";
    
    for(auto map_val:new_map)
    {
        std::cout<<std::endl<<map_val.first
                            <<map_val.second;
    }
    
    
    
    std::cout<<std::endl<<"------------------------------- ";
    
    std::cout<<std::endl<<" Initializing new map1 using copy constructor ";
    
    std::map<int,std::string> new_map2(new_map);
    
    std::cout<<std::endl<<" Printing Map using range based for loop";
    
    for(auto map_val:new_map2)
    {
        std::cout<<std::endl<<map_val.first
                            <<map_val.second;
    }
    
    
    
    std::cout<<std::endl<<"------------------------------- ";
    

    

    
    
    
    std::unordered_map<int,int> unmap_integer;//unordered map
    
    //unordermap data created with unordered data (3,2,1)keys
    //unordered map uses hash table : O(1)
    unmap_integer[4]=40;
    unmap_integer[1]=10;
    unmap_integer[3]=30;
    
    /*printing data in unorderedmap :
    unorderedmap iterator of first provide keys and
    unorderedmap iterator of second provides values*/
    
    /*unorderedmap stores data in unordered way
    */
    std::cout<<std::endl<<" Printing UnOrdered map ";
    for(auto umap_itr=unmap_integer.begin(); umap_itr != unmap_integer.end(); umap_itr++)
    {
        std::cout<<std::endl<<" umap key "<<umap_itr->first
                            <<" umap value "<<umap_itr->second;
    }
    std::cout<<std::endl<<"------------------------------- ";
    
    std::cout<<std::endl<<" Finding an element in Map";
    
    //find(key) --> will return iterator if element is found
    //find(key) --> will return end() if element is not found
    
    
    auto umap_itr = unmap_integer.find(3);
    
    if(umap_itr != unmap_integer.end())
    {
        std::cout<<std::endl<<umap_itr->first<<" key found in Map"<<std::endl;
    }
    else
    {
        std::cout<<std::endl<<umap_itr->first<<" key not found in Map"<<std::endl;
    }
   
    
    return 0;
}
