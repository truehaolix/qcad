


	// ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
        #ifndef RECMASHELLGRAPHICSVIEWIMAGE_H
        #define RECMASHELLGRAPHICSVIEWIMAGE_H

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RGraphicsViewImage.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class REcmaShellGraphicsViewImage : public RGraphicsViewImage {

        public:
      
    // Destructor:
    
            ~REcmaShellGraphicsViewImage();
        static RGraphicsViewImage* getSelf(const QString& fName, QScriptContext* context)
    ;static REcmaShellGraphicsViewImage* getSelfShell(const QString& fName, QScriptContext* context)
    ;
    
    
    // Constructors:
    
      REcmaShellGraphicsViewImage(
                
            );
        
    
    
      int getNumThreads(
                
            );
        
    
    
      void setNumThreads(
                int n
            );
        
    
    
      void clear(
                
            );
        
    
    
      void setViewportNumber(
                int n
            );
        
    
    
      int getViewportNumber(
                
            );
        
    
    
      void setNavigationAction(
                RAction * action
            );
        
    
    
      RBox getBox(
                
            );
        
    
    
      void autoZoom(
                int margin
        = RDEFAULT_MIN1, bool ignoreEmpty
        = false, bool ignoreLineweight
        = false
            );
        
    
    
      void zoomTo(
                const RBox & window, int margin
        = 0
            );
        
    
    
      void zoom(
                const RVector & center, double factor
            );
        
    
    
      void pan(
                const RVector & delta, bool regen
        = true
            );
        
    
    
      void centerToBox(
                const RBox & box
            );
        
    
    
      void centerToPoint(
                const RVector & point
            );
        
    
    
      void setGrid(
                RGrid * grid
            );
        
    
    
      RGrid * getGrid(
                
            );
        
    
    
      double getFactor(
                bool includeStepFactor
        = true
            );
        
    
    
      void setFactor(
                double f, bool regen
        = true
            );
        
    
    
      RVector getOffset(
                bool includeStepOffset
        = true
            );
        
    
    
      void setOffset(
                const RVector & offset, bool regen
        = true
            );
        
    
    
      QColor getBackgroundColor(
                
            );
        
    
    
      void setMargin(
                int m
            );
        
    
    
      void setColorMode(
                RGraphicsView::ColorMode cm
            );
        
    
    
      void setHairlineMode(
                bool on
            );
        
    
    
      bool getHairlineMode(
                
            );
        
    
    
      void setHairlineMinimumMode(
                bool on
            );
        
    
    
      bool getHairlineMinimumMode(
                
            );
        
    
    
      void setAntialiasing(
                bool on
            );
        
    
    
      bool getAntialiasing(
                
            );
        
    
    
      RGraphicsScene * getScene(
                
            );
        
    
    
      RDocument * getDocument(
                
            );
        
    
    
      RDocumentInterface * getDocumentInterface(
                
            );
        
    
    
      void setExporting(
                bool on
            );
        
    
    
      bool isExporting(
                
            );
        
    
    
      bool isPrintingOrExporting(
                
            );
        
    
    
      void setPrinting(
                bool on
            );
        
    
    
      bool isPrinting(
                
            );
        
    
    
      void setPrintPreview(
                bool on
            );
        
    
    
      bool isPrintPreview(
                
            );
        
    
    
      void setPrintPointSize(
                const RVector & s
            );
        
    
    
      void simulateMouseMoveEvent(
                
            );
        
    
    
      void setTextHeightThresholdOverride(
                int v
            );
        
    
    
      int getTextHeightThresholdOverride(
                
            );
        
    
    
      bool isGridVisible(
                
            );
        
    
    
      void setGridVisible(
                bool on
            );
        
    
    
      void setScene(
                RGraphicsSceneQt * scene, bool regen
        = true
            );
        
    
    
      void setBackgroundColor(
                const QColor & col
            );
        
    
    
      void regenerate(
                bool force
        = false
            );
        
    
    
      void repaintView(
                
            );
        
    
    
      void updateImage(
                
            );
        
    
    
      void giveFocus(
                
            );
        
    
    
      bool hasFocus(
                
            );
        
    
    
      void removeFocus(
                
            );
        
    
    
      void saveViewport(
                
            );
        
    
    
      void restoreViewport(
                
            );
        
    
    
      RVector mapFromView(
                const RVector & v, double z
        = 0.0
            );
        
    
    
      RVector mapToView(
                const RVector & v
            );
        
    
    
      double mapDistanceFromView(
                double d
            );
        
    
    
      double mapDistanceToView(
                double d
            );
        
    
    
      int getWidth(
                
            );
        
    
    
      int getHeight(
                
            );
        
    
    
      void resizeImage(
                int w, int h
            );
        
    
    
      void paintGridPoint(
                const RVector & ucsPosition
            );
        
    
    
      void paintGridLine(
                const RLine & ucsPosition
            );
        
    
    
      void setPaintOrigin(
                bool val
            );
        
    
    
      void setPanOptimization(
                bool on
            );
        
    
    
      bool getPanOptimization(
                
            );
        
    
    
      void paintEntities(
                QPainter * painter, const RBox & queryBox
            );
        
    
    
      void paintEntitiesMulti(
                const RBox & queryBox
            );
        
    
    
      void paintEntitiesThread(
                int threadId, const QList < REntity::Id > & list, int start, int end
            );
        
    
    
      void paintEntityThread(
                int threadId, REntity::Id id, bool preview
        = false
            );
        
    
    
      void paintOverlay(
                QPainter * painter
            );
        
    
    
      QImage getBuffer(
                
            );
        
    
    
      QTransform getTransform(
                
            );
        
    
    
      void emitUpdateSnapInfo(
                RSnap * snap, RSnapRestriction * restriction
            );
        
    
    
      void emitUpdateTextLabel(
                const RTextLabel & textLabel
            );
        
    
    
      void clearBackground(
                
            );
        
    
    
      void addToBackground(
                const RGraphicsSceneDrawable & drawable
            );
        
    
    
      void setBackgroundTransform(
                double bgFactor, const RVector & bgOffset
            );
        
    
    
      void clearOverlay(
                int overlayId
            );
        
      void clearOverlay(
                int overlayId, RObject::Id objectId
            );
        
    
    
      void addToOverlay(
                int overlayId, RObject::Id objectId, const RGraphicsSceneDrawable & drawable
            );
        
    
    
      void setColorCorrectionOverride(
                bool on
            );
        
    
    
      bool getColorCorrectionOverride(
                
            );
        
    
    
      void setMinimumLineweight(
                double lw
            );
        
    
    
      double getMinimumLineweight(
                
            );
        
    
    
      void setMaximumLineweight(
                double lw
            );
        
    
    
      double getMaximumLineweight(
                
            );
        
    
    
      void setPaintOffset(
                const RVector & offset
            );
        
    
    
      RVector getPaintOffset(
                
            );
        
    
    
      bool isAlphaEnabled(
                
            );
        
    
    
      void setAlphaEnabled(
                bool on
            );
        
    
    
      QList < RPainterPath > getTextLayoutsPainterPaths(
                const RTextBasedData & text, const QList < RTextLayout > & textLayouts
            );
        
    
    
      void applyMinimumLineweight(
                QPen & pen
            );
        
    
    
      void applyColorCorrection(
                QPen & pen
            );
        
      void applyColorCorrection(
                QBrush & brush
            );
        
    
    
      void applyColorMode(
                QPen & pen
            );
        
      void applyColorMode(
                QBrush & brush
            );
        
    
    
      double getPointSize(
                double pSize
            );
        
    
    
      void drawDot(
                QPainter * painter, QPointF pt
            );
        
    
    
      void drawPlus(
                QPainter * painter, QPointF pt, double pSize
            );
        
    
    
      void drawEx(
                QPainter * painter, QPointF pt, double pSize
            );
        
    
    
      void drawVBar(
                QPainter * painter, QPointF pt, double pSize
            );
        
    
    
      void drawCircle(
                QPainter * painter, QPointF pt, double pSize
            );
        
    
    
      void drawSquare(
                QPainter * painter, QPointF pt, double pSize
            );
        
    
    
      void paintImage(
                QPainter * painter, RImageData & image, bool workingSet
        = true
            );
        
    
    
      void paintText(
                QPainter * painter, RTextBasedData & text, bool workingSet
        = true
            );
        
    
    
      void paintOrigin(
                QPaintDevice & device
            );
        
    
    
      void paintReferencePoint(
                QPainter & painter, const RRefPoint & pos, bool highlight
            );
        
    
    
      void paintCursor(
                QPaintDevice & device
            );
        
    
    
      void paintRelativeZero(
                QPaintDevice & device
            );
        
    
    
      void invalidate(
                bool force
        = false
            );
        
    
    
      void updateGraphicsBuffer(
                
            );
        
    
    
      void updateTransformation(
                
            );
        
    
  
        // methods of 1st level base class RGraphicsView:
        
      void clearCaches(
                
            );
        
    
      void setDisplayOnlyCurrentUcs(
                bool on
            );
        
    
      QList < RVector > mapCornersFromView(
                
            );
        
    
      RVector getMinimum(
                
            );
        
    
      RVector getMaximum(
                
            );
        
    
      void handleTerminateEvent(
                RTerminateEvent & event
            );
        
    
      void handleKeyPressEvent(
                QKeyEvent & event
            );
        
    
      void handleKeyReleaseEvent(
                QKeyEvent & event
            );
        
    
      void handleMouseMoveEvent(
                RMouseEvent & event
            );
        
    
      void handleMousePressEvent(
                RMouseEvent & event
            );
        
    
      void handleMouseReleaseEvent(
                RMouseEvent & event
            );
        
    
      void handleMouseDoubleClickEvent(
                RMouseEvent & event
            );
        
    
      void handleWheelEvent(
                RWheelEvent & event
            );
        
    
      void handleTabletEvent(
                RTabletEvent & event
            );
        
    
      void handleSwipeGestureEvent(
                QSwipeGesture & gesture
            );
        
    
      void handlePanGestureEvent(
                QPanGesture & gesture
            );
        
    
      void handlePinchGestureEvent(
                QPinchGesture & gesture
            );
        
    
      void viewportChangeEvent(
                
            );
        
    
      void zoomIn(
                
            );
        
      void zoomIn(
                const RVector & center, double factor
        = 1.2
            );
        
    
      void zoomOut(
                
            );
        
      void zoomOut(
                const RVector & center, double factor
        = 1.2
            );
        
    
      void zoomPrevious(
                
            );
        
    
      bool zoomToSelection(
                int margin
        = RDEFAULT_MIN1
            );
        
    
      bool zoomToEntities(
                const QSet < REntity::Id > & ids, int margin
        = RDEFAULT_MIN1
            );
        
    
      void startPan(
                
            );
        
    
      int isActive(
                
            );
        
    
      bool getSignalsBlocked(
                
            );
        
    
      void setSignalsBlocked(
                bool on
            );
        
    
      QCursor getCursor(
                
            );
        
    
      void setCursor(
                Qt::CursorShape arg1
            );
        
      void setCursor(
                const QCursor & arg1
            );
        
    
      RRefPoint getClosestReferencePoint(
                const RVector & screenPosition, int range
            );
        
      RRefPoint getClosestReferencePoint(
                REntity::Id entityId, const RVector & screenPosition
            );
        
    
      REntity::Id getClosestEntity(
                const RVector & screenPosition, int range, int strictRange, bool includeLockedLayers
        = true, bool selectedOnly
        = false
            );
        
    
      int getMargin(
                
            );
        
    
      RGraphicsView::ColorMode getColorMode(
                
            );
        
    
      QList < RTextLabel > getTextLabels(
                
            );
        
    
      void clearTextLabels(
                
            );
        
    
      void addTextLabel(
                const RTextLabel & textLabel
            );
        
    
      RVector getLastKnownMousePosition(
                
            );
        
    
      double getCurrentStepScaleFactor(
                
            );
        
    
      void setCurrentStepScaleFactor(
                double f
            );
        
    
      RVector getCurrentStepOffset(
                
            );
        
    
      void setCurrentStepOffset(
                const RVector & s
            );
        
    
      void updateTextHeightThreshold(
                
            );
        
    
      bool isPathVisible(
                const RPainterPath & path
            );
        
    
      double getDevicePixelRatio(
                
            );
        
    
      bool isShared(
                
            );
        
    
      bool registerForFocus(
                
            );
        
    

    // protected methods (only available for ECMA shell classes) (generated by xsl2xpp.xsl):
	static  QScriptValue
        getTextLayoutsPainterPaths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        applyMinimumLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        applyColorCorrection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        applyColorMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointSize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        drawDot
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        drawPlus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        drawEx
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        drawVBar
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        drawCircle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        drawSquare
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintImage
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintOrigin
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintReferencePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintCursor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintRelativeZero
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        invalidate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateGraphicsBuffer
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateTransformation
        (QScriptContext* context, QScriptEngine* engine) 
        ;QScriptValue __qtscript_self;
            };
            Q_DECLARE_METATYPE(REcmaShellGraphicsViewImage*)
        
	#endif
    