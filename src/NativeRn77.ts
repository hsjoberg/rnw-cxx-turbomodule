import type { TurboModule } from 'react-native';
import { TurboModuleRegistry } from 'react-native';

export interface Spec extends TurboModule {
  multiply(a: number, b: number): number;
  hello(a: string): string;
}

export default TurboModuleRegistry.getEnforcing<Spec>('Rn77Cxx');
