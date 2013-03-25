

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #ifndef RECMAWHEELEVENT_H
        #define RECMAWHEELEVENT_H

        #include <ecmaapi_global.h>

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RWheelEvent.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaWheelEvent {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getQWheelEvent(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRInputEvent(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;
        // properties of secondary base class RInputEvent:
        

        // methods of secondary base class RInputEvent:
        static  QScriptValue
        getModelPosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setModelPosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getScreenPosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getGraphicsView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getGraphicsScene
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isValid
        (QScriptContext* context, QScriptEngine* engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RWheelEvent* getSelf(const QString& fName, QScriptContext* context)
    ;static RWheelEvent* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    