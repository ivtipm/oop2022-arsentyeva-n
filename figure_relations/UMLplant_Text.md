```

@startuml
class Figures
{
   + Figures();                         

   + perimeter():float virtual;
   + area():float virtual;
   + to_string() const: virtual std::string;
          
}
@enduml

@startuml
class Triangle
{
   # a, b, c: float;  

   + Triangle();
   + Triangle(float a1, float b1, float c1);                         

   + set_ABC(float a1, float b1, float c1):void ;
   + perimeter():float;
   + area()float;
   + hight():float;
   + to_string() const: virtual std::string;
          
}
@enduml

@startuml
class Circle
{
   # R: float;

   + Circle();
   + Circle(float R1);                         

   + set_R(float R1):void ;
   + perimeter():float;
   + area()float;
   + diametr():float;
   + to_string() const: virtual std::string;
          
}
@enduml

@startuml
Figures <|-- Triangle
Figures <|-- Circle
@enduml


```
