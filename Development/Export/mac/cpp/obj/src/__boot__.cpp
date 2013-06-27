#include <hxcpp.h>

#include <zpp_nape/util/ZPP_Set_ZPP_CbSet.h>
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleEvent.h>
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleSeg.h>
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleVert.h>
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionVertex.h>
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionPair.h>
#include <zpp_nape/util/ZPP_Set_ZPP_CbSetPair.h>
#include <zpp_nape/util/ZPP_Set_ZPP_Body.h>
#include <zpp_nape/util/ZPP_PubPool.h>
#include <zpp_nape/util/ZPP_Math.h>
#include <zpp_nape/util/ZPP_ContactList.h>
#include <zpp_nape/util/ZPP_ArbiterList.h>
#include <zpp_nape/util/ZPP_InteractionGroupList.h>
#include <zpp_nape/util/ZPP_ShapeList.h>
#include <zpp_nape/util/ZPP_EdgeList.h>
#include <zpp_nape/util/ZPP_ConvexResultList.h>
#include <zpp_nape/util/ZPP_RayResultList.h>
#include <zpp_nape/util/ZPP_GeomPolyList.h>
#include <zpp_nape/util/ZPP_Vec2List.h>
#include <zpp_nape/util/ZPP_CbTypeList.h>
#include <zpp_nape/util/ZPP_ListenerList.h>
#include <zpp_nape/util/ZPP_CompoundList.h>
#include <zpp_nape/util/ZPP_InteractorList.h>
#include <zpp_nape/util/ZPP_BodyList.h>
#include <zpp_nape/util/ZPP_ConstraintList.h>
#include <zpp_nape/util/ZPP_MixVec2List.h>
#include <zpp_nape/util/ZNPNode_RayResult.h>
#include <zpp_nape/util/ZNPNode_ZPP_GeomPoly.h>
#include <zpp_nape/util/ZNPNode_ConvexResult.h>
#include <zpp_nape/util/ZNPNode_ZPP_ToiEvent.h>
#include <zpp_nape/util/ZNPNode_ZPP_InteractionGroup.h>
#include <zpp_nape/util/ZNPNode_ZPP_ColArbiter.h>
#include <zpp_nape/util/ZNPNode_ZPP_Listener.h>
#include <zpp_nape/util/ZNPNode_ZPP_SensorArbiter.h>
#include <zpp_nape/util/ZNPNode_ZPP_FluidArbiter.h>
#include <zpp_nape/util/ZNPNode_ZPP_Component.h>
#include <zpp_nape/util/ZNPNode_ZPP_AABBNode.h>
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#include <zpp_nape/util/ZNPNode_ZPP_AABBPair.h>
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#include <zpp_nape/util/ZNPNode_ZPP_SimpleEvent.h>
#include <zpp_nape/util/ZNPNode_ZPP_SimpleVert.h>
#include <zpp_nape/util/ZNPNode_ZPP_GeomVert.h>
#include <zpp_nape/util/ZNPNode_ZPP_SimplifyP.h>
#include <zpp_nape/util/ZNPNode_ZPP_PartitionedPoly.h>
#include <zpp_nape/util/ZNPNode_ZPP_PartitionVertex.h>
#include <zpp_nape/util/ZNPNode_ZPP_CutVert.h>
#include <zpp_nape/util/ZNPNode_ZPP_CutInt.h>
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#include <zpp_nape/util/ZNPNode_ZPP_ConstraintListener.h>
#include <zpp_nape/util/ZNPNode_ZPP_BodyListener.h>
#include <zpp_nape/util/ZNPNode_ZPP_CbSetPair.h>
#include <zpp_nape/util/ZNPNode_ZPP_Interactor.h>
#include <zpp_nape/util/ZNPNode_ZPP_CbSet.h>
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#include <zpp_nape/util/ZNPNode_ZPP_Compound.h>
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#include <zpp_nape/util/ZNPNode_ZPP_CallbackSet.h>
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#include <zpp_nape/util/ZNPList_RayResult.h>
#include <zpp_nape/util/ZNPList_ZPP_GeomPoly.h>
#include <zpp_nape/util/ZNPList_ConvexResult.h>
#include <zpp_nape/util/ZNPList_ZPP_ToiEvent.h>
#include <zpp_nape/util/ZNPList_ZPP_InteractionGroup.h>
#include <zpp_nape/util/ZNPList_ZPP_ColArbiter.h>
#include <zpp_nape/util/ZNPList_ZPP_Listener.h>
#include <zpp_nape/util/ZNPList_ZPP_SensorArbiter.h>
#include <zpp_nape/util/ZNPList_ZPP_FluidArbiter.h>
#include <zpp_nape/util/ZNPList_ZPP_Component.h>
#include <zpp_nape/util/ZNPList_ZPP_AABBNode.h>
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#include <zpp_nape/util/ZNPList_ZPP_AABBPair.h>
#include <zpp_nape/util/ZNPList_ZPP_SimpleEvent.h>
#include <zpp_nape/util/ZNPList_ZPP_SimpleVert.h>
#include <zpp_nape/util/ZNPList_ZPP_GeomVert.h>
#include <zpp_nape/util/ZNPList_ZPP_SimplifyP.h>
#include <zpp_nape/util/ZNPList_ZPP_PartitionedPoly.h>
#include <zpp_nape/util/ZNPList_ZPP_PartitionVertex.h>
#include <zpp_nape/util/ZNPList_ZPP_CutVert.h>
#include <zpp_nape/util/ZNPList_ZPP_CutInt.h>
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#include <zpp_nape/util/ZNPList_ZPP_CbSetPair.h>
#include <zpp_nape/util/ZNPList_ZPP_Compound.h>
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#include <zpp_nape/util/ZNPList_ZPP_CallbackSet.h>
#include <zpp_nape/util/ZPP_Flags.h>
#include <zpp_nape/util/FastHash2_Hashable2_Boolfalse.h>
#include <zpp_nape/util/Hashable2_Boolfalse.h>
#include <zpp_nape/util/ZNPArray2_ZPP_MarchPair.h>
#include <zpp_nape/util/ZNPArray2_ZPP_GeomVert.h>
#include <zpp_nape/util/ZNPArray2_Float.h>
#include <zpp_nape/space/ZPP_SweepPhase.h>
#include <zpp_nape/space/ZPP_SweepData.h>
#include <zpp_nape/space/ZPP_Space.h>
#include <zpp_nape/space/ZPP_CbSetManager.h>
#include <zpp_nape/space/ZPP_CallbackSet.h>
#include <zpp_nape/space/ZPP_Component.h>
#include <zpp_nape/space/ZPP_Island.h>
#include <zpp_nape/space/ZPP_DynAABBPhase.h>
#include <zpp_nape/space/ZPP_AABBTree.h>
#include <zpp_nape/space/ZPP_AABBPair.h>
#include <zpp_nape/space/ZPP_AABBNode.h>
#include <zpp_nape/space/ZPP_Broadphase.h>
#include <zpp_nape/shape/ZPP_Polygon.h>
#include <zpp_nape/shape/ZPP_Edge.h>
#include <zpp_nape/shape/ZPP_Circle.h>
#include <zpp_nape/shape/ZPP_Shape.h>
#include <zpp_nape/phys/ZPP_Material.h>
#include <zpp_nape/phys/ZPP_FluidProperties.h>
#include <zpp_nape/phys/ZPP_Compound.h>
#include <zpp_nape/phys/ZPP_Body.h>
#include <zpp_nape/phys/ZPP_Interactor.h>
#include <zpp_nape/geom/ZPP_VecMath.h>
#include <zpp_nape/geom/ZPP_Vec3.h>
#include <zpp_nape/geom/ZPP_Vec2.h>
#include <zpp_nape/geom/ZPP_Triangular.h>
#include <zpp_nape/geom/ZPP_PartitionPair.h>
#include <zpp_nape/geom/ZPP_SweepDistance.h>
#include <zpp_nape/geom/ZPP_ToiEvent.h>
#include <zpp_nape/geom/ZPP_Simplify.h>
#include <zpp_nape/geom/ZPP_SimplifyP.h>
#include <zpp_nape/geom/ZPP_SimplifyV.h>
#include <zpp_nape/geom/ZPP_Simple.h>
#include <zpp_nape/geom/ZPP_SimpleSweep.h>
#include <zpp_nape/geom/ZPP_SimpleEvent.h>
#include <zpp_nape/geom/ZPP_SimpleSeg.h>
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#include <zpp_nape/geom/ZPP_Ray.h>
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#include <zpp_nape/geom/ZPP_Monotone.h>
#include <zpp_nape/geom/ZPP_MatMN.h>
#include <zpp_nape/geom/ZPP_Mat23.h>
#include <zpp_nape/geom/ZPP_MarchingSquares.h>
#include <zpp_nape/geom/ZPP_MarchPair.h>
#include <zpp_nape/geom/ZPP_MarchSpan.h>
#include <zpp_nape/geom/ZPP_GeomVertexIterator.h>
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#include <zpp_nape/geom/ZPP_GeomVert.h>
#include <zpp_nape/geom/ZPP_Geom.h>
#include <zpp_nape/geom/ZPP_Cutter.h>
#include <zpp_nape/geom/ZPP_CutInt.h>
#include <zpp_nape/geom/ZPP_CutVert.h>
#include <zpp_nape/geom/ZPP_ConvexRayResult.h>
#include <zpp_nape/geom/ZPP_Convex.h>
#include <zpp_nape/geom/ZPP_Collide.h>
#include <zpp_nape/util/ZNPList_ZPP_Vec2.h>
#include <zpp_nape/geom/ZPP_AABB.h>
#include <zpp_nape/dynamics/ZPP_SpaceArbiterList.h>
#include <zpp_nape/dynamics/ZPP_InteractionGroup.h>
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#include <zpp_nape/dynamics/ZPP_IContact.h>
#include <zpp_nape/dynamics/ZPP_Contact.h>
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#include <zpp_nape/constraint/ZPP_WeldJoint.h>
#include <zpp_nape/constraint/ZPP_UserBody.h>
#include <zpp_nape/constraint/ZPP_UserConstraint.h>
#include <zpp_nape/constraint/ZPP_PulleyJoint.h>
#include <zpp_nape/constraint/ZPP_PivotJoint.h>
#include <zpp_nape/constraint/ZPP_MotorJoint.h>
#include <zpp_nape/constraint/ZPP_LineJoint.h>
#include <zpp_nape/constraint/ZPP_DistanceJoint.h>
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#include <zpp_nape/constraint/ZPP_AngleJoint.h>
#include <zpp_nape/constraint/ZPP_Constraint.h>
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#include <zpp_nape/callbacks/ZPP_ConstraintListener.h>
#include <zpp_nape/callbacks/ZPP_BodyListener.h>
#include <zpp_nape/callbacks/ZPP_Listener.h>
#include <zpp_nape/callbacks/ZPP_CbType.h>
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#include <zpp_nape/util/ZNPList_ZPP_ConstraintListener.h>
#include <zpp_nape/util/ZNPList_ZPP_BodyListener.h>
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#include <zpp_nape/callbacks/ZPP_Callback.h>
#include <zpp_nape/ZPP_ID.h>
#include <zpp_nape/ZPP_Const.h>
#include <openfl/utils/WeakRef.h>
#include <openfl/events/SystemEvent.h>
#include <openfl/events/JoystickEvent.h>
#include <openfl/display/Tilesheet.h>
#include <openfl/display/ManagedStage.h>
#include <openfl/display/FPS.h>
#include <openfl/LibraryType.h>
#include <openfl/AssetType.h>
#include <openfl/Assets.h>
#include <nme/AssetData.h>
#include <nape/util/Debug.h>
#include <nape/space/Space.h>
#include <nape/space/Broadphase.h>
#include <nape/shape/ValidationResult.h>
#include <nape/shape/ShapeType.h>
#include <nape/shape/ShapeList.h>
#include <nape/shape/ShapeIterator.h>
#include <nape/shape/Polygon.h>
#include <nape/shape/EdgeList.h>
#include <nape/shape/EdgeIterator.h>
#include <nape/shape/Edge.h>
#include <nape/shape/Circle.h>
#include <nape/shape/Shape.h>
#include <nape/phys/Material.h>
#include <nape/phys/MassMode.h>
#include <nape/phys/InteractorList.h>
#include <nape/phys/InteractorIterator.h>
#include <nape/phys/InertiaMode.h>
#include <nape/phys/GravMassMode.h>
#include <nape/phys/FluidProperties.h>
#include <nape/phys/CompoundList.h>
#include <nape/phys/CompoundIterator.h>
#include <nape/phys/Compound.h>
#include <nape/phys/BodyType.h>
#include <nape/phys/BodyList.h>
#include <nape/phys/BodyIterator.h>
#include <nape/phys/Body.h>
#include <nape/phys/Interactor.h>
#include <nape/geom/Winding.h>
#include <nape/geom/Vec3.h>
#include <nape/geom/Vec2List.h>
#include <nape/geom/Vec2Iterator.h>
#include <nape/geom/Vec2.h>
#include <nape/geom/RayResultList.h>
#include <nape/geom/RayResultIterator.h>
#include <nape/geom/RayResult.h>
#include <nape/geom/Ray.h>
#include <nape/geom/MatMN.h>
#include <nape/geom/Mat23.h>
#include <nape/geom/MarchingSquares.h>
#include <nape/geom/GeomVertexIterator.h>
#include <nape/geom/GeomPolyList.h>
#include <nape/geom/GeomPolyIterator.h>
#include <nape/geom/GeomPoly.h>
#include <nape/geom/Geom.h>
#include <nape/geom/ConvexResultList.h>
#include <nape/geom/ConvexResultIterator.h>
#include <nape/geom/ConvexResult.h>
#include <nape/geom/AABB.h>
#include <nape/dynamics/InteractionGroupList.h>
#include <nape/dynamics/InteractionGroupIterator.h>
#include <nape/dynamics/InteractionGroup.h>
#include <nape/dynamics/InteractionFilter.h>
#include <nape/dynamics/FluidArbiter.h>
#include <nape/dynamics/ContactList.h>
#include <nape/dynamics/ContactIterator.h>
#include <nape/dynamics/Contact.h>
#include <nape/dynamics/CollisionArbiter.h>
#include <nape/dynamics/ArbiterType.h>
#include <nape/dynamics/ArbiterList.h>
#include <nape/dynamics/ArbiterIterator.h>
#include <nape/dynamics/Arbiter.h>
#include <nape/constraint/WeldJoint.h>
#include <nape/constraint/UserConstraint.h>
#include <nape/constraint/PulleyJoint.h>
#include <nape/constraint/PivotJoint.h>
#include <nape/constraint/MotorJoint.h>
#include <nape/constraint/LineJoint.h>
#include <nape/constraint/DistanceJoint.h>
#include <nape/constraint/ConstraintList.h>
#include <nape/constraint/ConstraintIterator.h>
#include <nape/constraint/AngleJoint.h>
#include <nape/constraint/Constraint.h>
#include <nape/callbacks/PreListener.h>
#include <nape/callbacks/PreFlag.h>
#include <nape/callbacks/PreCallback.h>
#include <nape/callbacks/OptionType.h>
#include <nape/callbacks/ListenerType.h>
#include <nape/callbacks/ListenerList.h>
#include <nape/callbacks/ListenerIterator.h>
#include <nape/callbacks/InteractionType.h>
#include <nape/callbacks/InteractionListener.h>
#include <nape/callbacks/InteractionCallback.h>
#include <nape/callbacks/ConstraintListener.h>
#include <nape/callbacks/ConstraintCallback.h>
#include <nape/callbacks/CbTypeList.h>
#include <nape/callbacks/CbTypeIterator.h>
#include <nape/callbacks/CbType.h>
#include <nape/callbacks/CbEvent.h>
#include <nape/callbacks/BodyListener.h>
#include <nape/callbacks/Listener.h>
#include <nape/callbacks/BodyCallback.h>
#include <nape/callbacks/Callback.h>
#include <nape/Config.h>
#include <haxe/xml/Fast.h>
#include <haxe/xml/_Fast/NodeListAccess.h>
#include <haxe/xml/_Fast/HasNodeAccess.h>
#include <haxe/xml/_Fast/HasAttribAccess.h>
#include <haxe/xml/_Fast/AttribAccess.h>
#include <haxe/xml/_Fast/NodeAccess.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/ds/StringMap.h>
#include <haxe/ds/IntMap.h>
#include <haxe/Timer.h>
#include <haxe/Resource.h>
#include <haxe/Log.h>
#include <flash/utils/Endian.h>
#include <flash/utils/CompressionAlgorithm.h>
#include <flash/utils/ByteArray.h>
#include <flash/utils/IDataInput.h>
#include <openfl/utils/IMemoryRange.h>
#include <flash/ui/Keyboard.h>
#include <flash/text/TextLineMetrics.h>
#include <flash/text/TextFormat.h>
#include <flash/text/TextFieldType.h>
#include <flash/text/TextFieldAutoSize.h>
#include <flash/text/TextField.h>
#include <flash/text/GridFitType.h>
#include <flash/text/FontType.h>
#include <flash/text/FontStyle.h>
#include <flash/text/Font.h>
#include <flash/text/AntiAliasType.h>
#include <flash/system/SecurityDomain.h>
#include <flash/system/LoaderContext.h>
#include <flash/system/Capabilities.h>
#include <flash/system/ApplicationDomain.h>
#include <flash/net/URLVariables.h>
#include <flash/net/URLRequestMethod.h>
#include <flash/net/URLRequestHeader.h>
#include <flash/net/URLRequest.h>
#include <flash/net/URLLoaderDataFormat.h>
#include <flash/media/SoundTransform.h>
#include <flash/media/SoundLoaderContext.h>
#include <flash/media/SoundChannel.h>
#include <flash/media/Sound.h>
#include <flash/media/ID3Info.h>
#include <flash/geom/Transform.h>
#include <flash/geom/Rectangle.h>
#include <flash/geom/Point.h>
#include <flash/geom/Matrix.h>
#include <flash/geom/ColorTransform.h>
#include <flash/filters/BitmapFilter.h>
#include <flash/events/SampleDataEvent.h>
#include <flash/events/ProgressEvent.h>
#include <flash/events/KeyboardEvent.h>
#include <flash/events/IOErrorEvent.h>
#include <flash/events/HTTPStatusEvent.h>
#include <flash/events/FocusEvent.h>
#include <flash/events/EventPhase.h>
#include <flash/events/Listener.h>
#include <flash/events/ErrorEvent.h>
#include <flash/events/TextEvent.h>
#include <flash/errors/RangeError.h>
#include <flash/errors/EOFError.h>
#include <flash/errors/ArgumentError.h>
#include <flash/errors/Error.h>
#include <flash/display/TriangleCulling.h>
#include <flash/display/StageScaleMode.h>
#include <flash/display/StageQuality.h>
#include <flash/display/StageDisplayState.h>
#include <flash/display/StageAlign.h>
#include <flash/display/TouchInfo.h>
#include <flash/display/Stage.h>
#include <flash/events/TouchEvent.h>
#include <flash/events/MouseEvent.h>
#include <flash/events/Event.h>
#include <flash/display/SpreadMethod.h>
#include <flash/display/Shape.h>
#include <flash/display/PixelSnapping.h>
#include <flash/display/MovieClip.h>
#include <flash/display/LoaderInfo.h>
#include <flash/net/URLLoader.h>
#include <flash/display/Loader.h>
#include <flash/display/Sprite.h>
#include <flash/display/LineScaleMode.h>
#include <flash/display/JointStyle.h>
#include <flash/display/InterpolationMethod.h>
#include <flash/display/IGraphicsData.h>
#include <flash/display/GraphicsPathWinding.h>
#include <flash/display/Graphics.h>
#include <flash/display/GradientType.h>
#include <flash/display/DisplayObjectContainer.h>
#include <flash/display/InteractiveObject.h>
#include <flash/display/CapsStyle.h>
#include <flash/display/BlendMode.h>
#include <flash/display/BitmapDataChannel.h>
#include <flash/display/OptimizedPerlin.h>
#include <flash/display/BitmapData.h>
#include <flash/display/Bitmap.h>
#include <flash/display/DisplayObject.h>
#include <flash/display/IBitmapDrawable.h>
#include <flash/events/EventDispatcher.h>
#include <flash/events/IEventDispatcher.h>
#include <flash/_Vector/Vector_Impl_.h>
#include <flash/Memory.h>
#include <flash/Lib.h>
#include <sys/io/_Process/Stdout.h>
#include <haxe/io/Input.h>
#include <haxe/io/Bytes.h>
#include <sys/io/_Process/Stdin.h>
#include <haxe/io/Output.h>
#include <sys/io/Process.h>
#include <cpp/zip/Uncompress.h>
#include <cpp/zip/Flush.h>
#include <cpp/zip/Compress.h>
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#include <Xml.h>
#include <XmlType.h>
#include <World1Level1.h>
#include <Type.h>
#include <Sys.h>
#include <cpp/Lib.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Std.h>
#include <Settings.h>
#include <RenderManager.h>
#include <Reflect.h>
#include <Mobile.h>
#include <IMap.h>
#include <List.h>
#include <LineDrawing.h>
#include <Level.h>
#include <IsoBody.h>
#include <Garbage.h>
#include <Drawing.h>
#include <DrawObject.h>
#include <GameObject.h>
#include <DrawButton.h>
#include <UIobject.h>
#include <Camera.h>
#include <BitmapDataIso.h>
#include <BackgroundObject.h>
#include <DocumentClass.h>
#include <Main.h>
#include <ApplicationMain.h>

void __boot_all()
{
hx::RegisterResources( hx::GetResources() );
::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__register();
::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__register();
::zpp_nape::util::ZPP_PubPool_obj::__register();
::zpp_nape::util::ZPP_Math_obj::__register();
::zpp_nape::util::ZPP_ContactList_obj::__register();
::zpp_nape::util::ZPP_ArbiterList_obj::__register();
::zpp_nape::util::ZPP_InteractionGroupList_obj::__register();
::zpp_nape::util::ZPP_ShapeList_obj::__register();
::zpp_nape::util::ZPP_EdgeList_obj::__register();
::zpp_nape::util::ZPP_ConvexResultList_obj::__register();
::zpp_nape::util::ZPP_RayResultList_obj::__register();
::zpp_nape::util::ZPP_GeomPolyList_obj::__register();
::zpp_nape::util::ZPP_Vec2List_obj::__register();
::zpp_nape::util::ZPP_CbTypeList_obj::__register();
::zpp_nape::util::ZPP_ListenerList_obj::__register();
::zpp_nape::util::ZPP_CompoundList_obj::__register();
::zpp_nape::util::ZPP_InteractorList_obj::__register();
::zpp_nape::util::ZPP_BodyList_obj::__register();
::zpp_nape::util::ZPP_ConstraintList_obj::__register();
::zpp_nape::util::ZPP_MixVec2List_obj::__register();
::zpp_nape::util::ZNPNode_RayResult_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__register();
::zpp_nape::util::ZNPNode_ConvexResult_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Listener_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Component_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Edge_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Compound_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Body_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_Shape_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::__register();
::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__register();
::zpp_nape::util::ZNPList_RayResult_obj::__register();
::zpp_nape::util::ZNPList_ZPP_GeomPoly_obj::__register();
::zpp_nape::util::ZNPList_ConvexResult_obj::__register();
::zpp_nape::util::ZNPList_ZPP_ToiEvent_obj::__register();
::zpp_nape::util::ZNPList_ZPP_InteractionGroup_obj::__register();
::zpp_nape::util::ZNPList_ZPP_ColArbiter_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Listener_obj::__register();
::zpp_nape::util::ZNPList_ZPP_SensorArbiter_obj::__register();
::zpp_nape::util::ZNPList_ZPP_FluidArbiter_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Component_obj::__register();
::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Edge_obj::__register();
::zpp_nape::util::ZNPList_ZPP_AABBPair_obj::__register();
::zpp_nape::util::ZNPList_ZPP_SimpleEvent_obj::__register();
::zpp_nape::util::ZNPList_ZPP_SimpleVert_obj::__register();
::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__register();
::zpp_nape::util::ZNPList_ZPP_SimplifyP_obj::__register();
::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj::__register();
::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj::__register();
::zpp_nape::util::ZNPList_ZPP_CutVert_obj::__register();
::zpp_nape::util::ZNPList_ZPP_CutInt_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Arbiter_obj::__register();
::zpp_nape::util::ZNPList_ZPP_CbSetPair_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Compound_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Body_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Shape_obj::__register();
::zpp_nape::util::ZNPList_ZPP_CallbackSet_obj::__register();
::zpp_nape::util::ZPP_Flags_obj::__register();
::zpp_nape::util::FastHash2_Hashable2_Boolfalse_obj::__register();
::zpp_nape::util::Hashable2_Boolfalse_obj::__register();
::zpp_nape::util::ZNPArray2_ZPP_MarchPair_obj::__register();
::zpp_nape::util::ZNPArray2_ZPP_GeomVert_obj::__register();
::zpp_nape::util::ZNPArray2_Float_obj::__register();
::zpp_nape::space::ZPP_SweepPhase_obj::__register();
::zpp_nape::space::ZPP_SweepData_obj::__register();
::zpp_nape::space::ZPP_Space_obj::__register();
::zpp_nape::space::ZPP_CbSetManager_obj::__register();
::zpp_nape::space::ZPP_CallbackSet_obj::__register();
::zpp_nape::space::ZPP_Component_obj::__register();
::zpp_nape::space::ZPP_Island_obj::__register();
::zpp_nape::space::ZPP_DynAABBPhase_obj::__register();
::zpp_nape::space::ZPP_AABBTree_obj::__register();
::zpp_nape::space::ZPP_AABBPair_obj::__register();
::zpp_nape::space::ZPP_AABBNode_obj::__register();
::zpp_nape::space::ZPP_Broadphase_obj::__register();
::zpp_nape::shape::ZPP_Polygon_obj::__register();
::zpp_nape::shape::ZPP_Edge_obj::__register();
::zpp_nape::shape::ZPP_Circle_obj::__register();
::zpp_nape::shape::ZPP_Shape_obj::__register();
::zpp_nape::phys::ZPP_Material_obj::__register();
::zpp_nape::phys::ZPP_FluidProperties_obj::__register();
::zpp_nape::phys::ZPP_Compound_obj::__register();
::zpp_nape::phys::ZPP_Body_obj::__register();
::zpp_nape::phys::ZPP_Interactor_obj::__register();
::zpp_nape::geom::ZPP_VecMath_obj::__register();
::zpp_nape::geom::ZPP_Vec3_obj::__register();
::zpp_nape::geom::ZPP_Vec2_obj::__register();
::zpp_nape::geom::ZPP_Triangular_obj::__register();
::zpp_nape::geom::ZPP_PartitionPair_obj::__register();
::zpp_nape::geom::ZPP_SweepDistance_obj::__register();
::zpp_nape::geom::ZPP_ToiEvent_obj::__register();
::zpp_nape::geom::ZPP_Simplify_obj::__register();
::zpp_nape::geom::ZPP_SimplifyP_obj::__register();
::zpp_nape::geom::ZPP_SimplifyV_obj::__register();
::zpp_nape::geom::ZPP_Simple_obj::__register();
::zpp_nape::geom::ZPP_SimpleSweep_obj::__register();
::zpp_nape::geom::ZPP_SimpleEvent_obj::__register();
::zpp_nape::geom::ZPP_SimpleSeg_obj::__register();
::zpp_nape::geom::ZPP_SimpleVert_obj::__register();
::zpp_nape::geom::ZPP_Ray_obj::__register();
::zpp_nape::geom::ZPP_PartitionedPoly_obj::__register();
::zpp_nape::geom::ZPP_PartitionVertex_obj::__register();
::zpp_nape::geom::ZPP_Monotone_obj::__register();
::zpp_nape::geom::ZPP_MatMN_obj::__register();
::zpp_nape::geom::ZPP_Mat23_obj::__register();
::zpp_nape::geom::ZPP_MarchingSquares_obj::__register();
::zpp_nape::geom::ZPP_MarchPair_obj::__register();
::zpp_nape::geom::ZPP_MarchSpan_obj::__register();
::zpp_nape::geom::ZPP_GeomVertexIterator_obj::__register();
::zpp_nape::geom::ZPP_GeomPoly_obj::__register();
::zpp_nape::geom::ZPP_GeomVert_obj::__register();
::zpp_nape::geom::ZPP_Geom_obj::__register();
::zpp_nape::geom::ZPP_Cutter_obj::__register();
::zpp_nape::geom::ZPP_CutInt_obj::__register();
::zpp_nape::geom::ZPP_CutVert_obj::__register();
::zpp_nape::geom::ZPP_ConvexRayResult_obj::__register();
::zpp_nape::geom::ZPP_Convex_obj::__register();
::zpp_nape::geom::ZPP_Collide_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Vec2_obj::__register();
::zpp_nape::geom::ZPP_AABB_obj::__register();
::zpp_nape::dynamics::ZPP_SpaceArbiterList_obj::__register();
::zpp_nape::dynamics::ZPP_InteractionGroup_obj::__register();
::zpp_nape::dynamics::ZPP_InteractionFilter_obj::__register();
::zpp_nape::dynamics::ZPP_IContact_obj::__register();
::zpp_nape::dynamics::ZPP_Contact_obj::__register();
::zpp_nape::dynamics::ZPP_ColArbiter_obj::__register();
::zpp_nape::dynamics::ZPP_FluidArbiter_obj::__register();
::zpp_nape::dynamics::ZPP_SensorArbiter_obj::__register();
::zpp_nape::dynamics::ZPP_Arbiter_obj::__register();
::zpp_nape::constraint::ZPP_WeldJoint_obj::__register();
::zpp_nape::constraint::ZPP_UserBody_obj::__register();
::zpp_nape::constraint::ZPP_UserConstraint_obj::__register();
::zpp_nape::constraint::ZPP_PulleyJoint_obj::__register();
::zpp_nape::constraint::ZPP_PivotJoint_obj::__register();
::zpp_nape::constraint::ZPP_MotorJoint_obj::__register();
::zpp_nape::constraint::ZPP_LineJoint_obj::__register();
::zpp_nape::constraint::ZPP_DistanceJoint_obj::__register();
::zpp_nape::constraint::ZPP_CopyHelper_obj::__register();
::zpp_nape::constraint::ZPP_AngleJoint_obj::__register();
::zpp_nape::constraint::ZPP_Constraint_obj::__register();
::zpp_nape::callbacks::ZPP_OptionType_obj::__register();
::zpp_nape::callbacks::ZPP_InteractionListener_obj::__register();
::zpp_nape::util::ZNPList_ZPP_CbType_obj::__register();
::zpp_nape::callbacks::ZPP_ConstraintListener_obj::__register();
::zpp_nape::callbacks::ZPP_BodyListener_obj::__register();
::zpp_nape::callbacks::ZPP_Listener_obj::__register();
::zpp_nape::callbacks::ZPP_CbType_obj::__register();
::zpp_nape::util::ZNPList_ZPP_CbSet_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Interactor_obj::__register();
::zpp_nape::util::ZNPList_ZPP_Constraint_obj::__register();
::zpp_nape::util::ZNPList_ZPP_ConstraintListener_obj::__register();
::zpp_nape::util::ZNPList_ZPP_BodyListener_obj::__register();
::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj::__register();
::zpp_nape::callbacks::ZPP_CbSetPair_obj::__register();
::zpp_nape::callbacks::ZPP_CbSet_obj::__register();
::zpp_nape::callbacks::ZPP_Callback_obj::__register();
::zpp_nape::ZPP_ID_obj::__register();
::zpp_nape::ZPP_Const_obj::__register();
::openfl::utils::WeakRef_obj::__register();
::openfl::events::SystemEvent_obj::__register();
::openfl::events::JoystickEvent_obj::__register();
::openfl::display::Tilesheet_obj::__register();
::openfl::display::ManagedStage_obj::__register();
::openfl::display::FPS_obj::__register();
::openfl::LibraryType_obj::__register();
::openfl::AssetType_obj::__register();
::openfl::Assets_obj::__register();
::nme::AssetData_obj::__register();
::nape::util::Debug_obj::__register();
::nape::space::Space_obj::__register();
::nape::space::Broadphase_obj::__register();
::nape::shape::ValidationResult_obj::__register();
::nape::shape::ShapeType_obj::__register();
::nape::shape::ShapeList_obj::__register();
::nape::shape::ShapeIterator_obj::__register();
::nape::shape::Polygon_obj::__register();
::nape::shape::EdgeList_obj::__register();
::nape::shape::EdgeIterator_obj::__register();
::nape::shape::Edge_obj::__register();
::nape::shape::Circle_obj::__register();
::nape::shape::Shape_obj::__register();
::nape::phys::Material_obj::__register();
::nape::phys::MassMode_obj::__register();
::nape::phys::InteractorList_obj::__register();
::nape::phys::InteractorIterator_obj::__register();
::nape::phys::InertiaMode_obj::__register();
::nape::phys::GravMassMode_obj::__register();
::nape::phys::FluidProperties_obj::__register();
::nape::phys::CompoundList_obj::__register();
::nape::phys::CompoundIterator_obj::__register();
::nape::phys::Compound_obj::__register();
::nape::phys::BodyType_obj::__register();
::nape::phys::BodyList_obj::__register();
::nape::phys::BodyIterator_obj::__register();
::nape::phys::Body_obj::__register();
::nape::phys::Interactor_obj::__register();
::nape::geom::Winding_obj::__register();
::nape::geom::Vec3_obj::__register();
::nape::geom::Vec2List_obj::__register();
::nape::geom::Vec2Iterator_obj::__register();
::nape::geom::Vec2_obj::__register();
::nape::geom::RayResultList_obj::__register();
::nape::geom::RayResultIterator_obj::__register();
::nape::geom::RayResult_obj::__register();
::nape::geom::Ray_obj::__register();
::nape::geom::MatMN_obj::__register();
::nape::geom::Mat23_obj::__register();
::nape::geom::MarchingSquares_obj::__register();
::nape::geom::GeomVertexIterator_obj::__register();
::nape::geom::GeomPolyList_obj::__register();
::nape::geom::GeomPolyIterator_obj::__register();
::nape::geom::GeomPoly_obj::__register();
::nape::geom::Geom_obj::__register();
::nape::geom::ConvexResultList_obj::__register();
::nape::geom::ConvexResultIterator_obj::__register();
::nape::geom::ConvexResult_obj::__register();
::nape::geom::AABB_obj::__register();
::nape::dynamics::InteractionGroupList_obj::__register();
::nape::dynamics::InteractionGroupIterator_obj::__register();
::nape::dynamics::InteractionGroup_obj::__register();
::nape::dynamics::InteractionFilter_obj::__register();
::nape::dynamics::FluidArbiter_obj::__register();
::nape::dynamics::ContactList_obj::__register();
::nape::dynamics::ContactIterator_obj::__register();
::nape::dynamics::Contact_obj::__register();
::nape::dynamics::CollisionArbiter_obj::__register();
::nape::dynamics::ArbiterType_obj::__register();
::nape::dynamics::ArbiterList_obj::__register();
::nape::dynamics::ArbiterIterator_obj::__register();
::nape::dynamics::Arbiter_obj::__register();
::nape::constraint::WeldJoint_obj::__register();
::nape::constraint::UserConstraint_obj::__register();
::nape::constraint::PulleyJoint_obj::__register();
::nape::constraint::PivotJoint_obj::__register();
::nape::constraint::MotorJoint_obj::__register();
::nape::constraint::LineJoint_obj::__register();
::nape::constraint::DistanceJoint_obj::__register();
::nape::constraint::ConstraintList_obj::__register();
::nape::constraint::ConstraintIterator_obj::__register();
::nape::constraint::AngleJoint_obj::__register();
::nape::constraint::Constraint_obj::__register();
::nape::callbacks::PreListener_obj::__register();
::nape::callbacks::PreFlag_obj::__register();
::nape::callbacks::PreCallback_obj::__register();
::nape::callbacks::OptionType_obj::__register();
::nape::callbacks::ListenerType_obj::__register();
::nape::callbacks::ListenerList_obj::__register();
::nape::callbacks::ListenerIterator_obj::__register();
::nape::callbacks::InteractionType_obj::__register();
::nape::callbacks::InteractionListener_obj::__register();
::nape::callbacks::InteractionCallback_obj::__register();
::nape::callbacks::ConstraintListener_obj::__register();
::nape::callbacks::ConstraintCallback_obj::__register();
::nape::callbacks::CbTypeList_obj::__register();
::nape::callbacks::CbTypeIterator_obj::__register();
::nape::callbacks::CbType_obj::__register();
::nape::callbacks::CbEvent_obj::__register();
::nape::callbacks::BodyListener_obj::__register();
::nape::callbacks::Listener_obj::__register();
::nape::callbacks::BodyCallback_obj::__register();
::nape::callbacks::Callback_obj::__register();
::nape::Config_obj::__register();
::haxe::xml::Fast_obj::__register();
::haxe::xml::_Fast::NodeListAccess_obj::__register();
::haxe::xml::_Fast::HasNodeAccess_obj::__register();
::haxe::xml::_Fast::HasAttribAccess_obj::__register();
::haxe::xml::_Fast::AttribAccess_obj::__register();
::haxe::xml::_Fast::NodeAccess_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Resource_obj::__register();
::haxe::Log_obj::__register();
::flash::utils::Endian_obj::__register();
::flash::utils::CompressionAlgorithm_obj::__register();
::flash::utils::ByteArray_obj::__register();
::flash::utils::IDataInput_obj::__register();
::openfl::utils::IMemoryRange_obj::__register();
::flash::ui::Keyboard_obj::__register();
::flash::text::TextLineMetrics_obj::__register();
::flash::text::TextFormat_obj::__register();
::flash::text::TextFieldType_obj::__register();
::flash::text::TextFieldAutoSize_obj::__register();
::flash::text::TextField_obj::__register();
::flash::text::GridFitType_obj::__register();
::flash::text::FontType_obj::__register();
::flash::text::FontStyle_obj::__register();
::flash::text::Font_obj::__register();
::flash::text::AntiAliasType_obj::__register();
::flash::system::SecurityDomain_obj::__register();
::flash::system::LoaderContext_obj::__register();
::flash::system::Capabilities_obj::__register();
::flash::system::ApplicationDomain_obj::__register();
::flash::net::URLVariables_obj::__register();
::flash::net::URLRequestMethod_obj::__register();
::flash::net::URLRequestHeader_obj::__register();
::flash::net::URLRequest_obj::__register();
::flash::net::URLLoaderDataFormat_obj::__register();
::flash::media::SoundTransform_obj::__register();
::flash::media::SoundLoaderContext_obj::__register();
::flash::media::SoundChannel_obj::__register();
::flash::media::Sound_obj::__register();
::flash::media::ID3Info_obj::__register();
::flash::geom::Transform_obj::__register();
::flash::geom::Rectangle_obj::__register();
::flash::geom::Point_obj::__register();
::flash::geom::Matrix_obj::__register();
::flash::geom::ColorTransform_obj::__register();
::flash::filters::BitmapFilter_obj::__register();
::flash::events::SampleDataEvent_obj::__register();
::flash::events::ProgressEvent_obj::__register();
::flash::events::KeyboardEvent_obj::__register();
::flash::events::IOErrorEvent_obj::__register();
::flash::events::HTTPStatusEvent_obj::__register();
::flash::events::FocusEvent_obj::__register();
::flash::events::EventPhase_obj::__register();
::flash::events::Listener_obj::__register();
::flash::events::ErrorEvent_obj::__register();
::flash::events::TextEvent_obj::__register();
::flash::errors::RangeError_obj::__register();
::flash::errors::EOFError_obj::__register();
::flash::errors::ArgumentError_obj::__register();
::flash::errors::Error_obj::__register();
::flash::display::TriangleCulling_obj::__register();
::flash::display::StageScaleMode_obj::__register();
::flash::display::StageQuality_obj::__register();
::flash::display::StageDisplayState_obj::__register();
::flash::display::StageAlign_obj::__register();
::flash::display::TouchInfo_obj::__register();
::flash::display::Stage_obj::__register();
::flash::events::TouchEvent_obj::__register();
::flash::events::MouseEvent_obj::__register();
::flash::events::Event_obj::__register();
::flash::display::SpreadMethod_obj::__register();
::flash::display::Shape_obj::__register();
::flash::display::PixelSnapping_obj::__register();
::flash::display::MovieClip_obj::__register();
::flash::display::LoaderInfo_obj::__register();
::flash::net::URLLoader_obj::__register();
::flash::display::Loader_obj::__register();
::flash::display::Sprite_obj::__register();
::flash::display::LineScaleMode_obj::__register();
::flash::display::JointStyle_obj::__register();
::flash::display::InterpolationMethod_obj::__register();
::flash::display::IGraphicsData_obj::__register();
::flash::display::GraphicsPathWinding_obj::__register();
::flash::display::Graphics_obj::__register();
::flash::display::GradientType_obj::__register();
::flash::display::DisplayObjectContainer_obj::__register();
::flash::display::InteractiveObject_obj::__register();
::flash::display::CapsStyle_obj::__register();
::flash::display::BlendMode_obj::__register();
::flash::display::BitmapDataChannel_obj::__register();
::flash::display::OptimizedPerlin_obj::__register();
::flash::display::BitmapData_obj::__register();
::flash::display::Bitmap_obj::__register();
::flash::display::DisplayObject_obj::__register();
::flash::display::IBitmapDrawable_obj::__register();
::flash::events::EventDispatcher_obj::__register();
::flash::events::IEventDispatcher_obj::__register();
::flash::_Vector::Vector_Impl__obj::__register();
::flash::Memory_obj::__register();
::flash::Lib_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Bytes_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::haxe::io::Output_obj::__register();
::sys::io::Process_obj::__register();
::cpp::zip::Uncompress_obj::__register();
::cpp::zip::Flush_obj::__register();
::cpp::zip::Compress_obj::__register();
::cpp::rtti::FieldNumericIntegerLookup_obj::__register();
::Xml_obj::__register();
::XmlType_obj::__register();
::World1Level1_obj::__register();
::Type_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::Settings_obj::__register();
::RenderManager_obj::__register();
::Reflect_obj::__register();
::Mobile_obj::__register();
::IMap_obj::__register();
::List_obj::__register();
::LineDrawing_obj::__register();
::Level_obj::__register();
::IsoBody_obj::__register();
::Garbage_obj::__register();
::Drawing_obj::__register();
::DrawObject_obj::__register();
::GameObject_obj::__register();
::DrawButton_obj::__register();
::UIobject_obj::__register();
::Camera_obj::__register();
::BitmapDataIso_obj::__register();
::BackgroundObject_obj::__register();
::DocumentClass_obj::__register();
::Main_obj::__register();
::ApplicationMain_obj::__register();
::Xml_obj::__init__();
::flash::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::Xml_obj::__boot();
::cpp::rtti::FieldNumericIntegerLookup_obj::__boot();
::cpp::zip::Compress_obj::__boot();
::cpp::zip::Flush_obj::__boot();
::cpp::zip::Uncompress_obj::__boot();
::haxe::Log_obj::__boot();
::ApplicationMain_obj::__boot();
::Main_obj::__boot();
::DocumentClass_obj::__boot();
::BackgroundObject_obj::__boot();
::BitmapDataIso_obj::__boot();
::Camera_obj::__boot();
::UIobject_obj::__boot();
::DrawButton_obj::__boot();
::GameObject_obj::__boot();
::DrawObject_obj::__boot();
::Drawing_obj::__boot();
::Garbage_obj::__boot();
::IsoBody_obj::__boot();
::Level_obj::__boot();
::LineDrawing_obj::__boot();
::List_obj::__boot();
::IMap_obj::__boot();
::Mobile_obj::__boot();
::Reflect_obj::__boot();
::RenderManager_obj::__boot();
::Settings_obj::__boot();
::Std_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::Sys_obj::__boot();
::Type_obj::__boot();
::World1Level1_obj::__boot();
::XmlType_obj::__boot();
::sys::io::Process_obj::__boot();
::haxe::io::Output_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Input_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::flash::Lib_obj::__boot();
::flash::Memory_obj::__boot();
::flash::_Vector::Vector_Impl__obj::__boot();
::flash::events::IEventDispatcher_obj::__boot();
::flash::events::EventDispatcher_obj::__boot();
::flash::display::IBitmapDrawable_obj::__boot();
::flash::display::DisplayObject_obj::__boot();
::flash::display::Bitmap_obj::__boot();
::flash::display::BitmapData_obj::__boot();
::flash::display::OptimizedPerlin_obj::__boot();
::flash::display::BitmapDataChannel_obj::__boot();
::flash::display::BlendMode_obj::__boot();
::flash::display::CapsStyle_obj::__boot();
::flash::display::InteractiveObject_obj::__boot();
::flash::display::DisplayObjectContainer_obj::__boot();
::flash::display::GradientType_obj::__boot();
::flash::display::Graphics_obj::__boot();
::flash::display::GraphicsPathWinding_obj::__boot();
::flash::display::IGraphicsData_obj::__boot();
::flash::display::InterpolationMethod_obj::__boot();
::flash::display::JointStyle_obj::__boot();
::flash::display::LineScaleMode_obj::__boot();
::flash::display::Sprite_obj::__boot();
::flash::display::Loader_obj::__boot();
::flash::net::URLLoader_obj::__boot();
::flash::display::LoaderInfo_obj::__boot();
::flash::display::MovieClip_obj::__boot();
::flash::display::PixelSnapping_obj::__boot();
::flash::display::Shape_obj::__boot();
::flash::display::SpreadMethod_obj::__boot();
::flash::events::Event_obj::__boot();
::flash::events::MouseEvent_obj::__boot();
::flash::events::TouchEvent_obj::__boot();
::flash::display::Stage_obj::__boot();
::flash::display::TouchInfo_obj::__boot();
::flash::display::StageAlign_obj::__boot();
::flash::display::StageDisplayState_obj::__boot();
::flash::display::StageQuality_obj::__boot();
::flash::display::StageScaleMode_obj::__boot();
::flash::display::TriangleCulling_obj::__boot();
::flash::errors::Error_obj::__boot();
::flash::errors::ArgumentError_obj::__boot();
::flash::errors::EOFError_obj::__boot();
::flash::errors::RangeError_obj::__boot();
::flash::events::TextEvent_obj::__boot();
::flash::events::ErrorEvent_obj::__boot();
::flash::events::Listener_obj::__boot();
::flash::events::EventPhase_obj::__boot();
::flash::events::FocusEvent_obj::__boot();
::flash::events::HTTPStatusEvent_obj::__boot();
::flash::events::IOErrorEvent_obj::__boot();
::flash::events::KeyboardEvent_obj::__boot();
::flash::events::ProgressEvent_obj::__boot();
::flash::events::SampleDataEvent_obj::__boot();
::flash::filters::BitmapFilter_obj::__boot();
::flash::geom::ColorTransform_obj::__boot();
::flash::geom::Matrix_obj::__boot();
::flash::geom::Point_obj::__boot();
::flash::geom::Rectangle_obj::__boot();
::flash::geom::Transform_obj::__boot();
::flash::media::ID3Info_obj::__boot();
::flash::media::Sound_obj::__boot();
::flash::media::SoundChannel_obj::__boot();
::flash::media::SoundLoaderContext_obj::__boot();
::flash::media::SoundTransform_obj::__boot();
::flash::net::URLLoaderDataFormat_obj::__boot();
::flash::net::URLRequest_obj::__boot();
::flash::net::URLRequestHeader_obj::__boot();
::flash::net::URLRequestMethod_obj::__boot();
::flash::net::URLVariables_obj::__boot();
::flash::system::ApplicationDomain_obj::__boot();
::flash::system::Capabilities_obj::__boot();
::flash::system::LoaderContext_obj::__boot();
::flash::system::SecurityDomain_obj::__boot();
::flash::text::AntiAliasType_obj::__boot();
::flash::text::Font_obj::__boot();
::flash::text::FontStyle_obj::__boot();
::flash::text::FontType_obj::__boot();
::flash::text::GridFitType_obj::__boot();
::flash::text::TextField_obj::__boot();
::flash::text::TextFieldAutoSize_obj::__boot();
::flash::text::TextFieldType_obj::__boot();
::flash::text::TextFormat_obj::__boot();
::flash::text::TextLineMetrics_obj::__boot();
::flash::ui::Keyboard_obj::__boot();
::openfl::utils::IMemoryRange_obj::__boot();
::flash::utils::IDataInput_obj::__boot();
::flash::utils::ByteArray_obj::__boot();
::flash::utils::CompressionAlgorithm_obj::__boot();
::flash::utils::Endian_obj::__boot();
::haxe::Resource_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::xml::_Fast::NodeAccess_obj::__boot();
::haxe::xml::_Fast::AttribAccess_obj::__boot();
::haxe::xml::_Fast::HasAttribAccess_obj::__boot();
::haxe::xml::_Fast::HasNodeAccess_obj::__boot();
::haxe::xml::_Fast::NodeListAccess_obj::__boot();
::haxe::xml::Fast_obj::__boot();
::nape::Config_obj::__boot();
::nape::callbacks::Callback_obj::__boot();
::nape::callbacks::BodyCallback_obj::__boot();
::nape::callbacks::Listener_obj::__boot();
::nape::callbacks::BodyListener_obj::__boot();
::nape::callbacks::CbEvent_obj::__boot();
::nape::callbacks::CbType_obj::__boot();
::nape::callbacks::CbTypeIterator_obj::__boot();
::nape::callbacks::CbTypeList_obj::__boot();
::nape::callbacks::ConstraintCallback_obj::__boot();
::nape::callbacks::ConstraintListener_obj::__boot();
::nape::callbacks::InteractionCallback_obj::__boot();
::nape::callbacks::InteractionListener_obj::__boot();
::nape::callbacks::InteractionType_obj::__boot();
::nape::callbacks::ListenerIterator_obj::__boot();
::nape::callbacks::ListenerList_obj::__boot();
::nape::callbacks::ListenerType_obj::__boot();
::nape::callbacks::OptionType_obj::__boot();
::nape::callbacks::PreCallback_obj::__boot();
::nape::callbacks::PreFlag_obj::__boot();
::nape::callbacks::PreListener_obj::__boot();
::nape::constraint::Constraint_obj::__boot();
::nape::constraint::AngleJoint_obj::__boot();
::nape::constraint::ConstraintIterator_obj::__boot();
::nape::constraint::ConstraintList_obj::__boot();
::nape::constraint::DistanceJoint_obj::__boot();
::nape::constraint::LineJoint_obj::__boot();
::nape::constraint::MotorJoint_obj::__boot();
::nape::constraint::PivotJoint_obj::__boot();
::nape::constraint::PulleyJoint_obj::__boot();
::nape::constraint::UserConstraint_obj::__boot();
::nape::constraint::WeldJoint_obj::__boot();
::nape::dynamics::Arbiter_obj::__boot();
::nape::dynamics::ArbiterIterator_obj::__boot();
::nape::dynamics::ArbiterList_obj::__boot();
::nape::dynamics::ArbiterType_obj::__boot();
::nape::dynamics::CollisionArbiter_obj::__boot();
::nape::dynamics::Contact_obj::__boot();
::nape::dynamics::ContactIterator_obj::__boot();
::nape::dynamics::ContactList_obj::__boot();
::nape::dynamics::FluidArbiter_obj::__boot();
::nape::dynamics::InteractionFilter_obj::__boot();
::nape::dynamics::InteractionGroup_obj::__boot();
::nape::dynamics::InteractionGroupIterator_obj::__boot();
::nape::dynamics::InteractionGroupList_obj::__boot();
::nape::geom::AABB_obj::__boot();
::nape::geom::ConvexResult_obj::__boot();
::nape::geom::ConvexResultIterator_obj::__boot();
::nape::geom::ConvexResultList_obj::__boot();
::nape::geom::Geom_obj::__boot();
::nape::geom::GeomPoly_obj::__boot();
::nape::geom::GeomPolyIterator_obj::__boot();
::nape::geom::GeomPolyList_obj::__boot();
::nape::geom::GeomVertexIterator_obj::__boot();
::nape::geom::MarchingSquares_obj::__boot();
::nape::geom::Mat23_obj::__boot();
::nape::geom::MatMN_obj::__boot();
::nape::geom::Ray_obj::__boot();
::nape::geom::RayResult_obj::__boot();
::nape::geom::RayResultIterator_obj::__boot();
::nape::geom::RayResultList_obj::__boot();
::nape::geom::Vec2_obj::__boot();
::nape::geom::Vec2Iterator_obj::__boot();
::nape::geom::Vec2List_obj::__boot();
::nape::geom::Vec3_obj::__boot();
::nape::geom::Winding_obj::__boot();
::nape::phys::Interactor_obj::__boot();
::nape::phys::Body_obj::__boot();
::nape::phys::BodyIterator_obj::__boot();
::nape::phys::BodyList_obj::__boot();
::nape::phys::BodyType_obj::__boot();
::nape::phys::Compound_obj::__boot();
::nape::phys::CompoundIterator_obj::__boot();
::nape::phys::CompoundList_obj::__boot();
::nape::phys::FluidProperties_obj::__boot();
::nape::phys::GravMassMode_obj::__boot();
::nape::phys::InertiaMode_obj::__boot();
::nape::phys::InteractorIterator_obj::__boot();
::nape::phys::InteractorList_obj::__boot();
::nape::phys::MassMode_obj::__boot();
::nape::phys::Material_obj::__boot();
::nape::shape::Shape_obj::__boot();
::nape::shape::Circle_obj::__boot();
::nape::shape::Edge_obj::__boot();
::nape::shape::EdgeIterator_obj::__boot();
::nape::shape::EdgeList_obj::__boot();
::nape::shape::Polygon_obj::__boot();
::nape::shape::ShapeIterator_obj::__boot();
::nape::shape::ShapeList_obj::__boot();
::nape::shape::ShapeType_obj::__boot();
::nape::shape::ValidationResult_obj::__boot();
::nape::space::Broadphase_obj::__boot();
::nape::space::Space_obj::__boot();
::nape::util::Debug_obj::__boot();
::nme::AssetData_obj::__boot();
::openfl::Assets_obj::__boot();
::openfl::AssetType_obj::__boot();
::openfl::LibraryType_obj::__boot();
::openfl::display::FPS_obj::__boot();
::openfl::display::ManagedStage_obj::__boot();
::openfl::display::Tilesheet_obj::__boot();
::openfl::events::JoystickEvent_obj::__boot();
::openfl::events::SystemEvent_obj::__boot();
::openfl::utils::WeakRef_obj::__boot();
::zpp_nape::ZPP_Const_obj::__boot();
::zpp_nape::ZPP_ID_obj::__boot();
::zpp_nape::callbacks::ZPP_Callback_obj::__boot();
::zpp_nape::callbacks::ZPP_CbSet_obj::__boot();
::zpp_nape::callbacks::ZPP_CbSetPair_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_BodyListener_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_ConstraintListener_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Constraint_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Interactor_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_CbSet_obj::__boot();
::zpp_nape::callbacks::ZPP_CbType_obj::__boot();
::zpp_nape::callbacks::ZPP_Listener_obj::__boot();
::zpp_nape::callbacks::ZPP_BodyListener_obj::__boot();
::zpp_nape::callbacks::ZPP_ConstraintListener_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_CbType_obj::__boot();
::zpp_nape::callbacks::ZPP_InteractionListener_obj::__boot();
::zpp_nape::callbacks::ZPP_OptionType_obj::__boot();
::zpp_nape::constraint::ZPP_Constraint_obj::__boot();
::zpp_nape::constraint::ZPP_AngleJoint_obj::__boot();
::zpp_nape::constraint::ZPP_CopyHelper_obj::__boot();
::zpp_nape::constraint::ZPP_DistanceJoint_obj::__boot();
::zpp_nape::constraint::ZPP_LineJoint_obj::__boot();
::zpp_nape::constraint::ZPP_MotorJoint_obj::__boot();
::zpp_nape::constraint::ZPP_PivotJoint_obj::__boot();
::zpp_nape::constraint::ZPP_PulleyJoint_obj::__boot();
::zpp_nape::constraint::ZPP_UserConstraint_obj::__boot();
::zpp_nape::constraint::ZPP_UserBody_obj::__boot();
::zpp_nape::constraint::ZPP_WeldJoint_obj::__boot();
::zpp_nape::dynamics::ZPP_Arbiter_obj::__boot();
::zpp_nape::dynamics::ZPP_SensorArbiter_obj::__boot();
::zpp_nape::dynamics::ZPP_FluidArbiter_obj::__boot();
::zpp_nape::dynamics::ZPP_ColArbiter_obj::__boot();
::zpp_nape::dynamics::ZPP_Contact_obj::__boot();
::zpp_nape::dynamics::ZPP_IContact_obj::__boot();
::zpp_nape::dynamics::ZPP_InteractionFilter_obj::__boot();
::zpp_nape::dynamics::ZPP_InteractionGroup_obj::__boot();
::zpp_nape::dynamics::ZPP_SpaceArbiterList_obj::__boot();
::zpp_nape::geom::ZPP_AABB_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Vec2_obj::__boot();
::zpp_nape::geom::ZPP_Collide_obj::__boot();
::zpp_nape::geom::ZPP_Convex_obj::__boot();
::zpp_nape::geom::ZPP_ConvexRayResult_obj::__boot();
::zpp_nape::geom::ZPP_CutVert_obj::__boot();
::zpp_nape::geom::ZPP_CutInt_obj::__boot();
::zpp_nape::geom::ZPP_Cutter_obj::__boot();
::zpp_nape::geom::ZPP_Geom_obj::__boot();
::zpp_nape::geom::ZPP_GeomVert_obj::__boot();
::zpp_nape::geom::ZPP_GeomPoly_obj::__boot();
::zpp_nape::geom::ZPP_GeomVertexIterator_obj::__boot();
::zpp_nape::geom::ZPP_MarchSpan_obj::__boot();
::zpp_nape::geom::ZPP_MarchPair_obj::__boot();
::zpp_nape::geom::ZPP_MarchingSquares_obj::__boot();
::zpp_nape::geom::ZPP_Mat23_obj::__boot();
::zpp_nape::geom::ZPP_MatMN_obj::__boot();
::zpp_nape::geom::ZPP_Monotone_obj::__boot();
::zpp_nape::geom::ZPP_PartitionVertex_obj::__boot();
::zpp_nape::geom::ZPP_PartitionedPoly_obj::__boot();
::zpp_nape::geom::ZPP_Ray_obj::__boot();
::zpp_nape::geom::ZPP_SimpleVert_obj::__boot();
::zpp_nape::geom::ZPP_SimpleSeg_obj::__boot();
::zpp_nape::geom::ZPP_SimpleEvent_obj::__boot();
::zpp_nape::geom::ZPP_SimpleSweep_obj::__boot();
::zpp_nape::geom::ZPP_Simple_obj::__boot();
::zpp_nape::geom::ZPP_SimplifyV_obj::__boot();
::zpp_nape::geom::ZPP_SimplifyP_obj::__boot();
::zpp_nape::geom::ZPP_Simplify_obj::__boot();
::zpp_nape::geom::ZPP_ToiEvent_obj::__boot();
::zpp_nape::geom::ZPP_SweepDistance_obj::__boot();
::zpp_nape::geom::ZPP_PartitionPair_obj::__boot();
::zpp_nape::geom::ZPP_Triangular_obj::__boot();
::zpp_nape::geom::ZPP_Vec2_obj::__boot();
::zpp_nape::geom::ZPP_Vec3_obj::__boot();
::zpp_nape::geom::ZPP_VecMath_obj::__boot();
::zpp_nape::phys::ZPP_Interactor_obj::__boot();
::zpp_nape::phys::ZPP_Body_obj::__boot();
::zpp_nape::phys::ZPP_Compound_obj::__boot();
::zpp_nape::phys::ZPP_FluidProperties_obj::__boot();
::zpp_nape::phys::ZPP_Material_obj::__boot();
::zpp_nape::shape::ZPP_Shape_obj::__boot();
::zpp_nape::shape::ZPP_Circle_obj::__boot();
::zpp_nape::shape::ZPP_Edge_obj::__boot();
::zpp_nape::shape::ZPP_Polygon_obj::__boot();
::zpp_nape::space::ZPP_Broadphase_obj::__boot();
::zpp_nape::space::ZPP_AABBNode_obj::__boot();
::zpp_nape::space::ZPP_AABBPair_obj::__boot();
::zpp_nape::space::ZPP_AABBTree_obj::__boot();
::zpp_nape::space::ZPP_DynAABBPhase_obj::__boot();
::zpp_nape::space::ZPP_Island_obj::__boot();
::zpp_nape::space::ZPP_Component_obj::__boot();
::zpp_nape::space::ZPP_CallbackSet_obj::__boot();
::zpp_nape::space::ZPP_CbSetManager_obj::__boot();
::zpp_nape::space::ZPP_Space_obj::__boot();
::zpp_nape::space::ZPP_SweepData_obj::__boot();
::zpp_nape::space::ZPP_SweepPhase_obj::__boot();
::zpp_nape::util::ZNPArray2_Float_obj::__boot();
::zpp_nape::util::ZNPArray2_ZPP_GeomVert_obj::__boot();
::zpp_nape::util::ZNPArray2_ZPP_MarchPair_obj::__boot();
::zpp_nape::util::Hashable2_Boolfalse_obj::__boot();
::zpp_nape::util::FastHash2_Hashable2_Boolfalse_obj::__boot();
::zpp_nape::util::ZPP_Flags_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_CallbackSet_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Shape_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Body_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Compound_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_CbSetPair_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Arbiter_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_CutInt_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_CutVert_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_SimplifyP_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_SimpleVert_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_SimpleEvent_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_AABBPair_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Edge_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Component_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_FluidArbiter_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_SensorArbiter_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_Listener_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_ColArbiter_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_InteractionGroup_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_ToiEvent_obj::__boot();
::zpp_nape::util::ZNPList_ConvexResult_obj::__boot();
::zpp_nape::util::ZNPList_ZPP_GeomPoly_obj::__boot();
::zpp_nape::util::ZNPList_RayResult_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Shape_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Body_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Compound_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Edge_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Component_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_Listener_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::__boot();
::zpp_nape::util::ZNPNode_ConvexResult_obj::__boot();
::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__boot();
::zpp_nape::util::ZNPNode_RayResult_obj::__boot();
::zpp_nape::util::ZPP_MixVec2List_obj::__boot();
::zpp_nape::util::ZPP_ConstraintList_obj::__boot();
::zpp_nape::util::ZPP_BodyList_obj::__boot();
::zpp_nape::util::ZPP_InteractorList_obj::__boot();
::zpp_nape::util::ZPP_CompoundList_obj::__boot();
::zpp_nape::util::ZPP_ListenerList_obj::__boot();
::zpp_nape::util::ZPP_CbTypeList_obj::__boot();
::zpp_nape::util::ZPP_Vec2List_obj::__boot();
::zpp_nape::util::ZPP_GeomPolyList_obj::__boot();
::zpp_nape::util::ZPP_RayResultList_obj::__boot();
::zpp_nape::util::ZPP_ConvexResultList_obj::__boot();
::zpp_nape::util::ZPP_EdgeList_obj::__boot();
::zpp_nape::util::ZPP_ShapeList_obj::__boot();
::zpp_nape::util::ZPP_InteractionGroupList_obj::__boot();
::zpp_nape::util::ZPP_ArbiterList_obj::__boot();
::zpp_nape::util::ZPP_ContactList_obj::__boot();
::zpp_nape::util::ZPP_Math_obj::__boot();
::zpp_nape::util::ZPP_PubPool_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__boot();
::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__boot();
}

