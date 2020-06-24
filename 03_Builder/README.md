# Builder Pattern

## Concept
>It is a separate component that provides a API to succinctly create a new instance of an complex object composed of a variety of parts that together form an entire part.

***Gamma Categorization***: Creational
 

## Motivation
- Optimize the creation of objects that requires many constructor calls;  
- Avoid a lot of ceremony to create some kind of object. eg. object with may constructor arguments;  
- Permit object creation piece by piece (step-by-step), controlling each step construction process;  
- Allows to vary a object's internal representation.  


## Approach
- Without builder;  
- Separate builder object;  
- Groovy-style builder (uniform initialization);  
- Fluent API;  
- Builder facade;  
  

## Glossary
**Uniform initialization**: feature since c++11 that allows the usage of a consistent syntax to initialize objects ranging from primitives types to aggregates.