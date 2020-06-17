
# Protype Pattern
## Concept

>Creates a new instance of an object that is complex using a already ready (total or partial) object as base model. After creation the new instance is customized.

## Motivation

- Avoid creation from the scratch;
- Avoid in some approaches subclasses of an object creator (eg. factory pattern);
- Avoid the inherent cost of creating a new object in the standard way. Boost performance;
- Keep memory footprint to a minimum.

## Approach

 - Standard use of the rule of three/five/zero;
 - Prototype factory;
 - Serialization.

## Glossary

**Shallow copy**: copy only the stack of the object.
**Deep copy**: copy both stack and heap of the object.
