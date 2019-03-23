import java.text.SimpleDateFormat;

class TimeManipulations
{
	public static void main(String args[])
	{
		long currentTime = System.currentTimeMillis();
		SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss.SSSSSSS");
		System.out.println("currentTime : " + sdf.format(currentTime));

		String s = String.format("The time is :  %d%n", currentTime);
		System.out.println("currentTime : " + s);

	}
}
