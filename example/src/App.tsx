import { Text, View, StyleSheet } from 'react-native';
import { multiply, hello } from 'rn77';

const result = multiply(3, 7);
const resultHello = hello("Hello");

export default function App() {
  return (
    <View style={styles.container}>
      <Text>Result: {result}</Text>
      <Text>resultHello: {resultHello}</Text>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: 'center',
    justifyContent: 'center',
  },
});
