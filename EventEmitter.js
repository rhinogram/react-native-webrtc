import {NativeModules, NativeEventEmitter} from 'react-native';

const { VWebRTCModule } = NativeModules;

const EventEmitter = new NativeEventEmitter(VWebRTCModule);

export default EventEmitter;
