public static ListNode detectCycle(ListNode head) {
	ListNode slow = head;
	ListNode fast = head;
}

while (true) {
	if (fast == null || fast.next == null) {
		return null; //遇到了null，说明不存在环
	}
	slow = slow.next;
	fast = fast.next.next;
	if (fast == slow) {
		break;//第一次相遇在Z点
	}
	slow = head; //slow从头开始走
	while (slow != fast) { //两者相遇在Y点，则推出
		slow = slow.next;
		fast = fast.next;
	}
	return slow;
}