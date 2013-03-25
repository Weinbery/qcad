

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is copyable.
        
        #ifndef RECMAPOLYLINE_H
        #define RECMAPOLYLINE_H

        #include <ecmaapi_global.h>

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RPolyline.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaPolyline {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRShape(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRExplodable(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRDirected(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;
        // properties of secondary base class RExplodable:
        

        // methods of secondary base class RExplodable:
        
        // properties of secondary base class RDirected:
        

        // methods of secondary base class RDirected:
        static  QScriptValue
        getDistanceFromStart
        (QScriptContext* context, QScriptEngine* engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        to2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clear
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        normalize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        appendShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        appendVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        prependVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        insertVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeLastVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setVertices
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVertices
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setVertexAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVertexAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLastVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        countVertices
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setBulges
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBulges
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBulgeAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setBulgeAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasArcSegments
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setClosed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isClosed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isLogicallyClosed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        contains
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection1
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection2
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoundingBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLength
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMiddlePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCenterPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointsWithDistanceToEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVectorTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        move
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rotate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        scale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mirror
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        flipHorizontal
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        flipVertical
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        reverse
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        stretch
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTrimEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getExploded
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isInterpolated
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        countSegments
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSegmentAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isStraight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toPainterPath
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        simplify
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RPolyline* getSelf(const QString& fName, QScriptContext* context)
    ;static RPolyline* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    