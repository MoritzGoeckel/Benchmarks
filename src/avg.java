public class avg {

    public static void main(String[] args) {
	    int amount = 1000 * 1000;

	    int[] nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};	
		
		for(int x = 0; x < 1000; x++){
			float[] result = new float[amount];	
			float sum = 0.0f;
		
			for(int i = 0; i < amount; i++){
				int index = i % 10;
				sum += nums[index];

				if(index > 20)
					sum -= nums[index - 20];

				result[i] = sum / 20.0f;
			}

			/*for(int i = 0; i < 30; i++)
				System.out.print(result[i] + " ");
			
			System.out.print("\n");*/
		}
    }
}
