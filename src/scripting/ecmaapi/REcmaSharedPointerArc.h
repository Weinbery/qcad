

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is copyable.
        
        #ifndef RECMASHAREDPOINTERARC_H
        #define RECMASHAREDPOINTERARC_H

        #include <ecmaapi_global.h>

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RArc.h"
            
            typedef QSharedPointer<RArc> RArcPointer;
        

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaSharedPointerArc {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRShape(QScriptContext *context,
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
        // properties of secondary base class RDirected:
        

        // methods of secondary base class RDirected:
        

    // properties:
    static  QScriptValue getSetCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetRadius
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetStartAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetEndAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetReversed
        (QScriptContext* context, QScriptEngine* engine) 
        ;

    // public methods:
    static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        to2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isValid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isFullCircle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        createFrom3Points
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        createFrom2PBulge
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        createTangential
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoundingBox
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
        getCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRadius
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setRadius
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setStartAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setEndAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isReversed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setReversed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngleLength
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDiameter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDiameter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLength
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getArea
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setArea
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection1
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection2
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSideOfPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSweep
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLength
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMiddlePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        moveStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        moveEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBulge
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
        getDistanceFromStart
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        approximateWithLines
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RArc* getSelf(const QString& fName, QScriptContext* context)
    ;static RArc* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue data
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue isNull
    (QScriptContext *context, QScriptEngine *engine)
    ;};
    #endif
    