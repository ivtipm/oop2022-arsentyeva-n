 `
 @startuml
class Figures
{
   + Figures();                         

   + perimeter():float virtual;
   + area():float virtual;
          
}
@enduml

@startuml
class Triangle
{
   # a, b, c: unsigned;  

   + Triangle();
   + Triangle(float a1, float b1, float c1);                         

   + set_ABC(float a1, float b1, float c1):void ;
   + perimeter():float;
   + area()float;
   + hight():float;
   + to_string():_string;
          
}
@enduml

@startuml
class Circle
{
   # R: unsigned;

   + Circle();
   + Circle(float R1);                         

   + set_R(float R1):void ;
   + perimeter():float;
   + area()float;
   + diameter():float;
          
}
@enduml

@startuml
Figures <|-- Triangle
Figures <|-- Circle
@enduml

`